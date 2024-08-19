#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AcknowsSequence.h"
#include "DynDelegate_AcknowsManager_PDA_int32Delegate.h"
#include "EnumObjectiveFeedbackType.h"
#include "EnumObjectiveStatus.h"
#include "EnumObjectiveTier.h"
#include "EnumSubObjFinishReason.h"
#include "Event_SubObjectiveDelegate.h"
#include "Event_SubObjective_TextDelegate.h"
#include "GameplayTwinReference.h"
#include "ObjectiveTierColorData.h"
#include "ObjectiveTierMapFeedbackData.h"
#include "VisibilityInGuiChangedDelegateDelegate.h"
#include "SubObjectiveComponent.generated.h"

class AActor;
class AFeedbackSubObjectiveArea;
class ASubLevelHandler;
class UAcknow_DataAsset;
class UAcknowsManagerComponent;
class UMapFeedbackData_StaticObject;
class UMapFeedback_SubObjective;
class UMapInformationComponent;
class UObjectiveMapFeedbackDataAsset;
class UObjectiveRewardComponent;
class USubLevelConnectorComponent;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USubObjectiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> LiftsToGoForFeedback;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveAtStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubObjectiveTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SubObjectivesToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RewardsToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleInGUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubObjectiveTextKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumObjectiveStatus SubObjectiveStatus;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubObjective OnFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubObjective OnInvalidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubObjective OnSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityInGuiChangedDelegate OnVisibilityInGuiChanged;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubObjective_Text OnTextUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumObjectiveFeedbackType FeedbackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeedbackCircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeedbackCircleZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FeedbackCircleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectiveMapFeedbackDataAsset* MapFeedBackDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedback_SubObjective> MapFeedbackComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapFeedbackData_StaticObject* MinimapFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapInformationComponent*> MapInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFeedbackSubObjectiveArea*> FeedbackZoneActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* _SubObjectiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorWithFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bStartNarrativeDialoguePlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence OnStartNarrativeDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence OnFinishNarrativeDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynDelegate_AcknowsManager_PDA_int32 OnStartNarrativeDialogueEnd;
    
public:
    USubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSubObjectiveText();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFeedbacks();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSubObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPlayStartNarrativeDialogue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubObjectiveHovered(bool _bIsFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubObjectiveFocus(bool _bIsFocus);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStatus(EnumObjectiveStatus _NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapFeedback(UMapFeedbackData_StaticObject* _MinimapFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetIsVisibleInGui(bool NewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetFeedbackType(EnumObjectiveFeedbackType NewType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveFeedbacks();
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelUnloaded(ASubLevelHandler* _SubLevelHandler, const FString& _StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* _SubLevelHandler, const FString& _StreamingLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartNarrativeDialogueEnded(UAcknowsManagerComponent* _AcknowsManager, UAcknow_DataAsset* _LastLine, int32 _SpeakerID);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectorLockStateChanged(ASubLevelHandler* Handler_, USubLevelConnectorComponent* _SubLevelConnector);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectorArrived_Event(USubLevelConnectorComponent* SubLevelConnector, const FString& ConnectorName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleInGui();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTargetedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSubObjectiveTextKey();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetSubObjectiveText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSubObjectiveTagName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetSubObjectiveSubLevelLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetSubObjectiveLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumObjectiveStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumObjectiveTier GetParentObjectiveTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveTierColorData GetObjectiveFeedbackColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapFeedbackData_StaticObject* GetMinimapFeedback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveTierMapFeedbackData GetMapFeedbackData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumObjectiveFeedbackType GetFeedbackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFeedbackCircleRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFeedbackCircleOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsConnectorsLeadingTo(const FString& _SubLevelDest) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishSubObjective(EnumSubObjFinishReason FinishReason);
    
    UFUNCTION(BlueprintCallable)
    void CreateFeedbacks();
    
    UFUNCTION(BlueprintCallable)
    void CreateFeedbackComponentForActor(AActor* _Target, FVector OverrideWorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CleanFeedbacks();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanMoveInMap() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CreateFeedbacks();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRewardToGive(UObjectiveRewardComponent* NewReward);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateFeedbacks();
    
};

