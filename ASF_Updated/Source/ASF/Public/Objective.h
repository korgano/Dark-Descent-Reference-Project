#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EnumMainObjectiveFailureConsequence.h"
#include "EnumObjectiveStatus.h"
#include "EnumObjectiveTier.h"
#include "Event_ObjectiveDelegate.h"
#include "Event_Objective_Status_StatusDelegate.h"
#include "Event_Objective_SubObjectiveComponentDelegate.h"
#include "Event_Objective_TextDelegate.h"
#include "Event_Objective_boolDelegate.h"
#include "OpenDataWidget.h"
#include "Objective.generated.h"

class AMission;
class AObjective;
class UMapFeedbackDataProperties;
class UObjectiveRewardComponent;
class USaveLoadComponent;
class USubObjectiveComponent;

UCLASS(Blueprintable)
class ASF_API AObjective : public AActor, public IOpenDataWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumObjectiveTier ObjectiveTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumMainObjectiveFailureConsequence MainObjectiveFailureConsequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumObjectiveStatus ObjectiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ExpirationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateAtStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USaveLoadComponent* TacticalModeSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectiveTextKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockRewards;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective_Status_Status OnObjectiveStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective OnFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective OnSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective OnInvalidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective_Text OnTextUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective_bool OnObjectiveHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective_bool OnObjectiveFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective_SubObjectiveComponent OnSubObjectiveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Objective_SubObjectiveComponent OnSubObjectiveEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMission* Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FeedbackDummysToReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> ObjectivesToUnLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USubObjectiveComponent*> SubObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USubObjectiveComponent*> FinishedSubObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectiveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
public:
    AObjective(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateObjectiveText();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryToStartSubObjective(USubObjectiveComponent* subobjective);
    
    UFUNCTION(BlueprintCallable)
    void Succeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SubObjectiveStarted(USubObjectiveComponent* _SubObjective);
    
    UFUNCTION(BlueprintCallable)
    void StartSubObjective(USubObjectiveComponent* _SubObjective);
    
    UFUNCTION(BlueprintCallable)
    void StartObjective(bool _bAutoFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldAutoFocusObjective();
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveStatus(EnumObjectiveStatus _NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveAshovered(bool _bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveAsFocused(bool _bIsFocused);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSubObjectiveSucceeded(USubObjectiveComponent* _SubObjective);
    
    UFUNCTION(BlueprintCallable)
    void OnSubObjectiveInvalidated(USubObjectiveComponent* _SubObjective);
    
    UFUNCTION(BlueprintCallable)
    void OnSubObjectiveFailed(USubObjectiveComponent* _SubObjective);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsObjectiveCheatAreActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivatedAtStartup() const;
    
    UFUNCTION(BlueprintCallable)
    void Invalidate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumObjectiveTier GetTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USubObjectiveComponent*> GetSubObjectiveWithStatus(EnumObjectiveStatus _Status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubObjectiveComponent* GetSubObjectiveByTagName(const FString& _TagName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubObjectiveComponent* GetSubObjectiveByName(FName _TagName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumObjectiveStatus GetStatus() const;
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<UObjectiveRewardComponent*> GetRewardsForSubObjective(USubObjectiveComponent* _SubObjective) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetObjectiveTextKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetObjectiveText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetObjectiveContextAsString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumMainObjectiveFailureConsequence GetMainObjectiveFailureConsequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AObjective* GetFocusedObjective();
    
    UFUNCTION(BlueprintCallable)
    void ForceSucceed(bool _bBlockRewards);
    
    UFUNCTION(BlueprintCallable)
    void Fail();
    
    UFUNCTION(BlueprintCallable)
    static void ClearFocusedObjective();
    

    // Fix for true pure virtual functions not being implemented
};

