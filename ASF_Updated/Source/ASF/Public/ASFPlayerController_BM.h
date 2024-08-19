#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "ASFPlayerController.h"
#include "Event_BMPlayerControler_boolDelegate.h"
#include "Templates/SubclassOf.h"
#include "ASFPlayerController_BM.generated.h"

class UHighlightWidget;
class UWidget;

UCLASS(Blueprintable)
class ASF_API AASFPlayerController_BM : public AASFPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_BMPlayerControler_bool OnHasInteractionInProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_BMPlayerControler_bool OnTransitioningChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> TutorialAllowedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInteractionInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTransitioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentOpenRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PendingRoomSubMenuOptionIndex;
    
public:
    AASFPlayerController_BM(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCurrentInterludeObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTransitioning(bool bTransitioning);
    
    UFUNCTION(BlueprintCallable)
    void SetHasInteractionInProgress(bool _bHasInteractionInProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsGameInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCurrentInterludeObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleActiveTutorial(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseActiveTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddTutorialHighlight(UWidget* Widget, TSubclassOf<UHighlightWidget> CustomHighlight, bool bAddMask);
    
};

