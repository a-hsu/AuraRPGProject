// Copyright Huck Games

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

	AAuraCharacter();

public:
	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_PlayerState() override;

	//~ Begin CombatInterface
	virtual int32 GetPlayerLevel() override;
	//~ End CombatInterface

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura")
	float RotationRate;

private:
	virtual void InitAbilityActorInfo() override;
};
