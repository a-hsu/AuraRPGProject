// Copyright Huck Games

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
/*
 * Aura Gameplay Tags
 *
 * Singleton containing native Gameplay Tags
 */

#define DEFINE_GAMEPLAY_TAG(TagName, TagString) static const FName TagName = FName(TEXT(TagString));
#define DEFINE_GAMEPLAY_TAG_MACRO(TagMacroName, TagString) static const FName TagMacroName = FName(TEXT(TagString));

struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();


	// Primary Attributes
	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Resilience;
	FGameplayTag Attributes_Primary_Vigor;
	FGameplayTag Attributes_Primary_Agility;
	FGameplayTag Attributes_Primary_Wisdom;

	// Secondary Attributes
	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CritChance;
	FGameplayTag Attributes_Secondary_CritDamage;
	FGameplayTag Attributes_Secondary_CritResist;
	FGameplayTag Attributes_Secondary_HealthRegen;
	FGameplayTag Attributes_Secondary_ManaRegen;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;
	FGameplayTag Attributes_Secondary_MaxStamina;
	FGameplayTag Attributes_Secondary_AttackSpeed;
	FGameplayTag Attributes_Secondary_DodgeChance;
	FGameplayTag Attributes_Secondary_MagicResist;
	FGameplayTag Attributes_Secondary_LifeSteal;
	FGameplayTag Attributes_Secondary_SpellPower;
	FGameplayTag Attributes_Secondary_MovementSpeed;

	// Vital Attributes
	FGameplayTag Attributes_Vital_Health;
	FGameplayTag Attributes_Vital_Mana;
	FGameplayTag Attributes_Vital_Stamina;protected:

private:
	static FAuraGameplayTags GameplayTags;
};
