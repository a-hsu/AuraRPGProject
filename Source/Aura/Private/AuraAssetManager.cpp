// Copyright Huck Games


#include "AuraAssetManager.h"
#include "AuraGameplayTags.h"
// #include "AbilitySystemGlobals.h"

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);
	Cast<UAuraAssetManager>(GEngine->AssetManager);

	return *Cast<UAuraAssetManager>(GEngine->AssetManager);
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	FAuraGameplayTags::InitializeNativeGameplayTags();

	// This is required to use Target Data - Versions 4.24 - 5.2
	// UAbilitySystemGlobals::Get().InitGlobalData();
}

