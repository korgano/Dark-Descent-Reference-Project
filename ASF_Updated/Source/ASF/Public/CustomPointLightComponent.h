#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/PointLightComponent.h"
#include "CustomPointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCustomPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UCustomPointLightComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetUseInverseSquaredFalloff(int32 _UseInverseSquaredFalloff);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowSharpen(float _ShadowSharpen);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannelsByStruct(FLightingChannels _LightingChannels);
    
    UFUNCTION(BlueprintCallable)
    void SetCastStaticShadows(int32 _CastStaticShadows);
    
};

