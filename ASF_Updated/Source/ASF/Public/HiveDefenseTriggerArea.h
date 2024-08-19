#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Event_AHiveDefenseTriggerAreaDelegate.h"
#include "HiveDefenseTriggerArea.generated.h"

class AASFGameModeBase_TacticalMode;
class ATMEventSystem;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASF_API AHiveDefenseTriggerArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATMEventSystem* TMEventSystem;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AHiveDefenseTriggerArea OnAreaTriggered;
    
    AHiveDefenseTriggerArea(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSetOnGameMode(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem);
    
    UFUNCTION(BlueprintCallable)
    void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool dFromSweep, const FHitResult& SweepResult);
    
};

