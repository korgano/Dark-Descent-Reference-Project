#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "OtagoEvent.h"
#include "OtagoEventCondition.h"
#include "OtagoEventConditionCollection.h"
#include "OtagoEventEffect.h"
#include "OtagoEventOption.h"
#include "OtagoEventOutcome.h"
#include "OtagoEventValue.h"
#include "OtagoEventSystem.generated.h"

class AASFGameState_BaseManagement;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UOtagoEventSystem : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFGameState_BaseManagement* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventOutcome> PastEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag NextEvent;
    
public:
    UOtagoEventSystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SortOtagoEventEffects(UPARAM(Ref) TArray<FOtagoEventEffect>& _Effects, TArray<FOtagoEventEffect>& _SortedEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResolveEventConditions(const FOtagoEvent& _Event) const;
    
    UFUNCTION(BlueprintCallable)
    FOtagoEventOutcome ResolveEvent(const FOtagoEvent& _Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResolveConditionCollection(const FOtagoEventConditionCollection& _ConditionCollection, const FOtagoEvent& _ContextEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResolveCondition(const FOtagoEventCondition& _Condition, const FOtagoEvent& _ContextEvent, FOtagoEventValue& _Value) const;
    
    UFUNCTION(BlueprintCallable)
    void PickEventOption(int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetValueAsString(const FOtagoEventValue& _Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOtagoEventOutcome GetLastEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetFormattedValueTag(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedTarget(const FOtagoEventOutcome& _EventOutcome, int32 _TargetIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedOptionText(const FText& _Text, const FOtagoEventOption& _Option, const FOtagoEventOutcome& _EventOutcome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedEventText(const FText& _Text, const FOtagoEvent& _Event, const FOtagoEventOutcome& _EventOutcome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedEffectText(const FText& _Text, const FOtagoEventEffect& _Effect, const FOtagoEventOutcome& _EventOutcome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedEffectOutcome(const FOtagoEventOutcome& _EventOutcome, const FOtagoEventEffect& _Effect, int32 _OutcomeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetConditionAsString(const FOtagoEventCondition& _Condition);
    
    UFUNCTION(BlueprintCallable)
    void ForceNextEvent(FGameplayTag _EventTag);
    
};

