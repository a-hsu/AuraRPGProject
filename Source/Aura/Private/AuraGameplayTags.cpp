// Copyright Huck Games


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"
// Define the Gameplay Tag FName
DEFINE_GAMEPLAY_TAG(TAG_Primary_Strength, "Attributes.Primary.Strength");
DEFINE_GAMEPLAY_TAG(TAG_Primary_Intelligence, "Attributes.Primary.Intelligence");
DEFINE_GAMEPLAY_TAG(TAG_Primary_Resilience, "Attributes.Primary.Resilience");
DEFINE_GAMEPLAY_TAG(TAG_Primary_Vigor, "Attributes.Primary.Vigor");
DEFINE_GAMEPLAY_TAG(TAG_Primary_Agility, "Attributes.Primary.Agility");
DEFINE_GAMEPLAY_TAG(TAG_Primary_Wisdom, "Attributes.Primary.Wisdom");

DEFINE_GAMEPLAY_TAG(TAG_Secondary_Armor, "Attributes.Secondary.Armor");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_ArmorPenetration, "Attributes.Secondary.ArmorPenetration");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_BlockChance, "Attributes.Secondary.BlockChance");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_CritChance, "Attributes.Secondary.CritChance");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_CritDamage, "Attributes.Secondary.CritDamage");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_CritResist, "Attributes.Secondary.CritResist");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_HealthRegen, "Attributes.Secondary.HealthRegen");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_ManaRegen, "Attributes.Secondary.ManaRegen");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_MaxHealth, "Attributes.Secondary.MaxHealth");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_MaxMana, "Attributes.Secondary.MaxMana");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_MaxStamina, "Attributes.Secondary.MaxStamina");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_AttackSpeed, "Attributes.Secondary.AttackSpeed");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_DodgeChance, "Attributes.Secondary.DodgeChance");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_MagicResist, "Attributes.Secondary.MagicResist");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_LifeSteal, "Attributes.Secondary.LifeSteal");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_SpellPower, "Attributes.Secondary.SpellPower");
DEFINE_GAMEPLAY_TAG(TAG_Secondary_MovementSpeed, "Attributes.Secondary.MovementSpeed");

DEFINE_GAMEPLAY_TAG(TAG_Vital_Health, "Attributes.Vital.Health");
DEFINE_GAMEPLAY_TAG(TAG_Vital_Mana, "Attributes.Vital.Mana");
DEFINE_GAMEPLAY_TAG(TAG_Vital_Stamina, "Attributes.Vital.Stamina");

DEFINE_GAMEPLAY_TAG(TAG_Input_LMB,  "InputTag.LMB");
DEFINE_GAMEPLAY_TAG(TAG_Input_RMB,  "InputTag.RMB");
DEFINE_GAMEPLAY_TAG(TAG_Input_AttackMoveClick,  "InputTag.AttackMoveClick");
DEFINE_GAMEPLAY_TAG(TAG_Input_1,	"InputTag.1");
DEFINE_GAMEPLAY_TAG(TAG_Input_2,	"InputTag.2");
DEFINE_GAMEPLAY_TAG(TAG_Input_3,	"InputTag.3");
DEFINE_GAMEPLAY_TAG(TAG_Input_4,	"InputTag.4");

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	// Primary Attributes
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Primary_Strength, "Increases physical power and melee damage");
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Primary_Intelligence, "Increases magical power and mana capacity");
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Primary_Resilience, "Increases physical resistance and durability");
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Primary_Vigor, "Increases overall health and vitality");
	GameplayTags.Attributes_Primary_Agility = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Primary_Agility, "Increases attack speed and evasion");
	GameplayTags.Attributes_Primary_Wisdom = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Primary_Wisdom, "Increases mana regen and spell potency");

	// Secondary Attributes
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_Armor, "Reduces damage taken, improves block chance");
	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_ArmorPenetration, "Ignores a portion of enemy armor");
	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_BlockChance, "Chance to block incoming attacks");
	GameplayTags.Attributes_Secondary_CritChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_CritChance, "Chance to deal critical damage");
	GameplayTags.Attributes_Secondary_CritDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_CritDamage, "Critical Damage multiplier");
	GameplayTags.Attributes_Secondary_CritResist = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_CritResist, "Reduces incoming critical damage");
	GameplayTags.Attributes_Secondary_HealthRegen = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_HealthRegen, "Regenerates health over time");
	GameplayTags.Attributes_Secondary_ManaRegen = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_ManaRegen, "Regenerates mana over time");
	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_MaxHealth, "Maximum amount of health");
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_MaxMana, "Maximum amount of mana");
	GameplayTags.Attributes_Secondary_MaxStamina = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_MaxStamina, "Maximum amount of stamina");
	GameplayTags.Attributes_Secondary_AttackSpeed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_AttackSpeed, "Number of attacks per second");
	GameplayTags.Attributes_Secondary_DodgeChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_DodgeChance, "Chance to dodge attacks");
	GameplayTags.Attributes_Secondary_MagicResist = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_MagicResist, "Reduces incoming magical damage");
	GameplayTags.Attributes_Secondary_LifeSteal = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_LifeSteal, "Converts damage dealt into health");
	GameplayTags.Attributes_Secondary_SpellPower = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_SpellPower, "Spell power used for magic damage");
	GameplayTags.Attributes_Secondary_MovementSpeed = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Secondary_MovementSpeed, "Character movement speed");

	// Vital Attributes
	GameplayTags.Attributes_Vital_Health = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Vital_Health, "Current health of the unit");
	GameplayTags.Attributes_Vital_Mana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Vital_Mana, "Current mana of the unit");
	GameplayTags.Attributes_Vital_Stamina = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Vital_Stamina, "Current stamina of the unit");

	// Input Tags
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Input_LMB, FString("Input Tag for Left Mouse Button"));
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Input_RMB, FString("Input Tag for Right Mouse Button"));
	GameplayTags.InputTag_AttackMoveClick = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Input_AttackMoveClick, FString("Input Tag for Attack Move Click"));
	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Input_1, FString("Input Tag for 1 Key"));
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Input_2, FString("Input Tag for 2 Key"));
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Input_3, FString("Input Tag for 3 Key"));
	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		TAG_Input_4, FString("Input Tag for 4 Key"));
	
}
