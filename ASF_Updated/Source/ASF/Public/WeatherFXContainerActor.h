#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeatherType.h"
#include "WeatherFXContainerActor.generated.h"

class AASFGameState_TacticalMode;
class AMission;
class UParticleSystem;

UCLASS(Blueprintable)
class ASF_API AWeatherFXContainerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> ParticleSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WeatherType Type;
    
    AWeatherFXContainerActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterToMission(AASFGameState_TacticalMode* GameState, AMission* Mission);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactiveContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActiveContainer();
    
};

