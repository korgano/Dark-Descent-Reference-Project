#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ASFPlayerController.h"
#include "EConcurentWidget.h"
#include "EGamepadBindingType.h"
#include "EMinimapType.h"
#include "Event_AASFPlayerControllerTacticalDelegate.h"
#include "Event_AASFPlayerControllerTactical_ConcurentWidgetDelegate.h"
#include "Event_AASFPlayerControllerTactical_EGamepadBindingTypeDelegate.h"
#include "Event_AASFPlayerControllerTactical_InteractionDelegate.h"
#include "Event_AASFPlayerControllerTactical_SubObjective_boolDelegate.h"
#include "Event_AASFPlayerControllerTactical_UTMMainWidgetDelegate.h"
#include "Event_AASFPlayerControllerTactical_boolDelegate.h"
#include "Templates/SubclassOf.h"
#include "ASFPlayerControllerTactical.generated.h"

class AHumanoidMarine;
class ASecurityCamera;
class ASquad;
class UActivity;
class UInteractiveComponent;
class UMapFeedbackData_UserWidget;
class UPauseMenuWidget;
class URoomClusterFilter;
class UTMChartmapTableWidget;
class UTMMainWidget;
class UTMMapWidget;
class UTMPlayerChoiceWidget;
class UTinda_UserWidget;

UCLASS(Blueprintable)
class ASF_API AASFPlayerControllerTactical : public AASFPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldInteractInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool CrouchUndercoverToggle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGamepadBindingType GamepadBindingType_IG;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical_EGamepadBindingType OnGamepadInputChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeHoverDisplayedAfterRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeHoverIsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle InteractInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle InteractInputPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical_bool OnCrouchUnderCoverUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical OnFocusNarrativeInFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConcurentWidget ConcurentWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical_ConcurentWidget OnConcurentWidgetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical_UTMMainWidget OnMainWidgetSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical SkillSelectionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_UserWidget* MarineCardSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical_Interaction OnInteractionHoveredChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* HoveredInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActivity> ActivityClass_PlayerFocus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivity* Activity_PlayerFocus;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> CursorRoomClusterFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveToCursorValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuWidget* EscapeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTMMapWidget* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTMChartmapTableWidget* ChartmapTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTMPlayerChoiceWidget* ChoiceMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASecurityCamera* CurrentSecurityCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical_bool OnDynamicTutorialHoldStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerControllerTactical_SubObjective_bool Event_OnSquadInRangeOfSubObjective;
    
    AASFPlayerControllerTactical(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCoverToggle(bool Crouch);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleMinimapWithoutChangeType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleMinimap(EMinimapType MinimapType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTMMainGUI(UTMMainWidget* _Main);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInSecurityCameraView(bool _B);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredInteraction(UInteractiveComponent* _Interaction);
    
    UFUNCTION(BlueprintCallable)
    void SetHoldInteractInput(bool _HoldInteractInput);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSecurityCamera(ASecurityCamera* NewSecurityCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetConcurentWidget(EConcurentWidget _ConcurentWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetChoiceMenu(UTMPlayerChoiceWidget* _ChoiceMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCanDisplayCover(bool Display);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Retribution();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseInteractInput();
    
    UFUNCTION(BlueprintCallable)
    void PressInteractInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenSkillMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenCodex();
    
    UFUNCTION(BlueprintCallable)
    void OnSquadLeaderChanged(ASquad* Squad, AHumanoidMarine* Leader);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsModalWindowOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInSecurityCameraView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsHoveringCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsActionMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTMMapWidget* GetTMMapGUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTMMainWidget* GetTMMainGUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHoldInteractInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMapFeedbackData_UserWidget*> GetGrapnelWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDynamicTutoHoldPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASecurityCamera* GetCurrentSecurityCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayUpperMapWidgetSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayDownerMapWidgetSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseSkillMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseMinimap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChartmapTableRevealClick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeBindingType(EGamepadBindingType _GamepadBindingType_IG);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastDynamicTutorialHoldStateChanged(bool NewState);
    
};

