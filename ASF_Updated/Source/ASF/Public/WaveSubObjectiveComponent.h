#pragma once
#include "CoreMinimal.h"
#include "Event_WaveSubObjectiveComponent_WaveSpawnerComponentDelegate.h"
#include "SubObjectiveComponent.h"
#include "WaveNarrativeDialogue.h"
#include "WaveSubObjectiveComponent.generated.h"

class UTrackingSystemComponent;
class UWaveSpawnerComponent;
class UWaveSubObjectiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWaveSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayWithoutEnnemyTrackedToNextWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeactiveSystemicOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReactiveSystemicOnFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveNarrativeDialogue> NarrativeDialoguesPerWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_WaveSubObjectiveComponent_WaveSpawnerComponent OnSpawnNewWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_WaveSubObjectiveComponent_WaveSpawnerComponent OnWaveCleared;
    
    UWaveSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWaveSpawnerWaveStartWave(UWaveSpawnerComponent* WaveSpawner);
    
    UFUNCTION(BlueprintCallable)
    void OnWaveSpawnerWaveEnded(UWaveSpawnerComponent* WaveSpawner);
    
    UFUNCTION(BlueprintCallable)
    void OnWaveSpawnerWaveCleared(UWaveSpawnerComponent* WaveSpawner);
    
    UFUNCTION(BlueprintCallable)
    void OnTrackingSystemUpdated(UTrackingSystemComponent* TrackingSystemComponent);
    
    UFUNCTION(BlueprintCallable)
    void EventPlayNarrativeDialogueOnWaveStarted(UWaveSubObjectiveComponent* WaveSubObjectiveComp, UWaveSpawnerComponent* WaveSpawnerComponent);
    
    UFUNCTION(BlueprintCallable)
    void EventPlayNarrativeDialogueOnWaveCleared(UWaveSubObjectiveComponent* WaveSubObjectiveComp, UWaveSpawnerComponent* WaveSpawnerComponent);
    
};

