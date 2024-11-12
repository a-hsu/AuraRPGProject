// Copyright Huck Games


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	const FAuraInputAction* AuraInputAction = AbilityInputActions.FindByPredicate([&InputTag](const FAuraInputAction& InputAction)
	{
		return InputAction.InputTag == InputTag;
	});

	if(AuraInputAction)
	{
		return AuraInputAction->InputAction;
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("No input action found for tag: [%s], on InputConfig [%s]"), *InputTag.ToString(), *GetNameSafe(this));
	}
	return nullptr;
}
