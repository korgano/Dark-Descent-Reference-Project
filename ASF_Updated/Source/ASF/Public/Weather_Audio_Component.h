#pragma once
#include "CoreMinimal.h"
#include "ASFAudioComponent.h"
#include "Weather_Audio_Component.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWeather_Audio_Component : public UASFAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UWeather_Audio_Component(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init_Weather_Audio_Component();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeActivateComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateComponent();
    
};

