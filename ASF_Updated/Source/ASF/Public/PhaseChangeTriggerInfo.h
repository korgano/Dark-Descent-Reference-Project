#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TriggerInfo.h"
#include "PhaseChangeTriggerInfo.generated.h"

class UFactionSystemic;

UCLASS(Blueprintable)
class ASF_API UPhaseChangeTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> NeededPhases;
    
public:
    UPhaseChangeTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
};

