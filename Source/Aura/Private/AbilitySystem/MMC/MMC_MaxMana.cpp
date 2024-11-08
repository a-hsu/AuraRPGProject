// Copyright Huck Games


#include "AbilitySystem/MMC/MMC_MaxMana.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_MaxMana::UMMC_MaxMana()
{
	WisdomDef.AttributeToCapture = UAuraAttributeSet::GetVigorAttribute();
	WisdomDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Source;
	WisdomDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(WisdomDef);
}

float UMMC_MaxMana::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer * SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer * TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Wisdom = 0.f;
	GetCapturedAttributeMagnitude(WisdomDef, Spec, EvaluationParameters, Wisdom);
	Wisdom = FMath::Max<float>(Wisdom, 0.0f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 UnitLevel = CombatInterface->GetPlayerLevel();

	return 50 + 3.f * Wisdom + 1.7f * UnitLevel;
}
