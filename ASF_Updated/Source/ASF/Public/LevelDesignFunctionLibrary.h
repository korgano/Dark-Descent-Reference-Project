#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayEventLink.h"
#include "LevelDesignFunctionLibrary.generated.h"

class AGameplayEvent;
class AMission;
class AObjective;
class UGameplayAction;
class UObject;
class UObjectiveRewardComponent;
class USubObjectiveComponent;
class UTriggerInfo;

UCLASS(Blueprintable)
class ASF_API ULevelDesignFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelDesignFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SortSubObjectives(UPARAM(Ref) TArray<USubObjectiveComponent*>& _SubObjectives, TArray<USubObjectiveComponent*>& _SortedSubObjectives);
    
    UFUNCTION(BlueprintCallable)
    static void SortObjectives(UPARAM(Ref) TArray<AObjective*>& _Objectives, TArray<AObjective*>& _SortedObjectives);
    
    UFUNCTION(BlueprintCallable)
    static void SortObjectiveRewards(UPARAM(Ref) TArray<UObjectiveRewardComponent*>& _Rewards, TArray<UObjectiveRewardComponent*>& _SortedRewards);
    
    UFUNCTION(BlueprintCallable)
    static void SortGameplayEventsWithSequences(UPARAM(Ref) TArray<AGameplayEvent*>& _Events, TArray<AGameplayEvent*>& _StandaloneEvents, TArray<FGameplayEventLink>& _EventLinkHeads, AMission* Mission);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameplayEventLinkRec(AGameplayEvent* _Event, TArray<AGameplayEvent*>& _Events);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameplayEventLink(AGameplayEvent* _Event, FGameplayEventLink& _EventLink);
    
    UFUNCTION(BlueprintCallable)
    static UTriggerInfo* DuplicateTriggerInfo(UTriggerInfo* _Info, UObject* _Outer);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAction* DuplicateGameplayAction(UGameplayAction* _Action, UObject* _Outer);
    
};

