#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASFLevelScriptActorBase.h"
#include "ActorLightConfig.h"
#include "LightConfig.h"
#include "ASFLevelScriptActor_LightingLVL.generated.h"

class AASFGameModeBase_TacticalMode;
class AExponentialHeightFog;
class ASubLevelHandler;

UCLASS(Blueprintable)
class ASF_API AASFLevelScriptActor_LightingLVL : public AASFLevelScriptActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* ExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMarineShoulderLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarineShoulderLightIntensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMarineVolumetricScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarineShoulderMarineVolumetricScatteringOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMarineLightShoulderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MarineLightShoulderColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLightConfig> IndoorLightConfigs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorLightConfig> ActorLightConfigs;
    
public:
    AASFLevelScriptActor_LightingLVL(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnIndoorStateChanged(bool _IsIndoor);
    
};

