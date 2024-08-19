#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "StatisticsSubsystem.generated.h"

class AHumanoid;
class UFactionSystemic;

UCLASS(Blueprintable)
class ASF_API UStatisticsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UStatisticsSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateTimePhaseForMissionEnd(UFactionSystemic* _Systemic, const FGameplayTag& _OldPhase, const FGameplayTag& _NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllSystemicPhasesTime();
    
    UFUNCTION(BlueprintCallable)
    void MissionEnd();
    
    UFUNCTION(BlueprintCallable)
    void MarineLevelUpEvent(AHumanoid* Marine, int32 NbLevelsUp);
    
    UFUNCTION(BlueprintCallable)
    void BindOnPhaseChangedSystemic();
    
};

