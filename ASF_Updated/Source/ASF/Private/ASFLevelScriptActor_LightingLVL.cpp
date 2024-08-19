#include "ASFLevelScriptActor_LightingLVL.h"

AASFLevelScriptActor_LightingLVL::AASFLevelScriptActor_LightingLVL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExponentialHeightFog = NULL;
    this->bOverrideMarineShoulderLightIntensity = false;
    this->MarineShoulderLightIntensityOverride = 0.00f;
    this->bOverrideMarineVolumetricScattering = false;
    this->MarineShoulderMarineVolumetricScatteringOverride = 0.00f;
    this->bOverrideMarineLightShoulderColor = false;
}

void AASFLevelScriptActor_LightingLVL::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AASFLevelScriptActor_LightingLVL::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void AASFLevelScriptActor_LightingLVL::OnIndoorStateChanged(bool _IsIndoor) {
}


