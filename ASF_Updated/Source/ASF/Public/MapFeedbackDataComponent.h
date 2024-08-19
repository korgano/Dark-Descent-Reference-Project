#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_UMapFeedbackDataComponent_BoolDelegate.h"
#include "MapFeedbackDataComponent.generated.h"

class AASFPlayerController;
class AMinimapHandler;
class UMapFeedbackDataProperties;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMapFeedbackDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoAddFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMotionTrackerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFeedbackedOnlyOnMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UMapFeedbackDataComponent_Bool OnMotionTrackerVisibilityChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInMotionTracker;
    
public:
    UMapFeedbackDataComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMinimapData(AMinimapHandler* MinimapHandler);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOpenDataProperties(TSoftClassPtr<UMapFeedbackDataProperties> Properties);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMovingObject();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMinimapHandlerSet(AASFPlayerController* _ASFPlayerController, AMinimapHandler* _MinimapHandler);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetMovingObjectProperties(UMapFeedbackDataProperties*& _OpenDataProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInMotionTracker() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeMotionTrackingSettings(bool _bIsMotionTrackerFeedback, bool _bIsFeedbackedOnlyOnMovement);
    
    UFUNCTION(BlueprintCallable)
    void AddMovingObject();
    
};

