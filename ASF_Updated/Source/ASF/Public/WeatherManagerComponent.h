#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weather.h"
#include "WeatherType.h"
#include "WeatherManagerComponent.generated.h"

class AWeatherFXContainerActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWeatherManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWeatherManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterWeatherFXContainerActor(AWeatherFXContainerActor* WeatherFXContainerActor);
    
    UFUNCTION(BlueprintCallable)
    void StopWeatherContainerByTypeAndStep(WeatherType Type);
    
    UFUNCTION(BlueprintCallable)
    void StopWeatherByType(WeatherType Type);
    
    UFUNCTION(BlueprintCallable)
    void StartWeatherContainerByTypeAndStep(WeatherType Type, int32 Step, float powerStep);
    
    UFUNCTION(BlueprintCallable)
    void StartStepWeatherByType(WeatherType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetNewStepWeatherById(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWeatherFXContainerActor(AWeatherFXContainerActor* WeatherFXContainerActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNewStepWeather(WeatherType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FWeather> GetWeathers();
    
};

