#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "Types/SlateEnums.h"
#include "EMinimapType.h"
#include "ESquadMode.h"
#include "ETutorialState.h"
#include "EnumControllerType.h"
#include "Event_AASFPlayerController_AHumanoidMarineDelegate.h"
#include "Event_AASFPlayerController_AMinimapHandlerDelegate.h"
#include "Event_AASFPlayerController_TutorialStateDelegate.h"
#include "Event_ASFController_AActorDelegate.h"
#include "Event_ASFController_AActor_ActorDelegate.h"
#include "Event_ASFController_ChangeWindowFocusUpdateVolumeDelegate.h"
#include "Event_ASFController_Overlay_boolDelegate.h"
#include "Event_ASFController_SkillDelegate.h"
#include "Event_ASFController_Skill_SkillDelegate.h"
#include "Event_ASFController_SquadModeDelegate.h"
#include "Event_ASFController_StringDelegate.h"
#include "Event_ASFController_Widget_WidgetDelegate.h"
#include "Event_ASFController_boolDelegate.h"
#include "Event_ASFController_floatDelegate.h"
#include "Event_ASFController_intDelegate.h"
#include "ASFPlayerController.generated.h"

class AASFPlayerState;
class AActor;
class AHumanoidMarine;
class AHumanoidTactical;
class AInputActionBinder;
class AMinimapHandler;
class ASquad;
class AWheelHandler;
class UAudioComponent;
class UCommonSaveLoadComponent;
class UDataTable;
class UInputComponent;
class UObject;
class UOverlay_WidgetComponent;
class USkill;
class USoundBase;
class UTexture2D;
class UTextureRenderTarget2D;
class UTinda_UserWidget;
class UUIVisibilityComponent;
class UUserWidget;

UCLASS(Blueprintable)
class AASFPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WaterMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> EscapeMenuOrDecoPopUp_Asked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Pause_Asks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SlowMo_Asks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerController_AHumanoidMarine OnMarineCardOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIVisibilityComponent* UIVisibilityComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectTypeQuery> DoorOverlapChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CursorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShiftIsPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlternativeCommandIsPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatMenuPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatDataPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputActionOrderPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapLoading;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnCombatDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnMinimapOpenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnSkillMenuOpenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerController_AMinimapHandler OnMinimapSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnFireAtWill;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInputActionBinder* InputActionBinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWheelHandler* WheelHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinimapHandler* MinimapHandler;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_int OnDoubleClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_AActor_Actor OnActorSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SelectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HoveredActor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_AActor OnActorHoverChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnDisplayInteractiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AskDisplayInteractiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESquadMode SquadMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_SquadMode Event_OnSquadModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> HiddenCursorAsks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnHiddenCursorAsk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EMouseCursor::Type>, FSoftClassPath> SoftwareCursors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> GrapableActor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_float OnChangeGameSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnPauseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnMenuPauseOpeningChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill* SelectedSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill* HoveredSkill;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_Skill_Skill OnSkillSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_Skill_Skill OnSkillHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_Skill OnSkillValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_Skill OnDeployableSkillDeployed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_Skill OnDeployableSkillStartDeploying;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_Overlay_bool OnOverlaySelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay_WidgetComponent* SelectedOverlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_String OnShortCutPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> WidgetCard_Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_UserWidget* WidgetCard_Member_Selected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_Widget_Widget WidgetCard_Member_Selected_Changed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnCinematicModeActivationChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinematicModeAmbienceSoundVolume;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFPlayerController_TutorialState OnTutorialStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DialogueSoundIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* DialogueAudioComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnDialogueSoundIsPlayingChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerTypeSwitchAxisMinDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUINavigation LastNavigationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDPadNavigationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Cursor3D;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_bool OnFollowerWidget_Focused;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InputImagesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerActionToInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MarineRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ItemRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CheatMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> CheatWindowActorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CheatMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CheatWindow;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CheatRunTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFController_ChangeWindowFocusUpdateVolume UpdateVolumeOnWindowFocusChanged;
    
    AASFPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSoundMasterClassSlowMo();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCursorPosition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleCheatWindow();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCheatMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchCursorType(EnumControllerType NewType);
    
    UFUNCTION(BlueprintCallable)
    void StopDialogueSound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayCursor() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetCard_Member_Selected(UTinda_UserWidget* _newCard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityMainGUI(bool _bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialState(ETutorialState _TutorialState);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadMode(ESquadMode _SquadMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundGroupVolume(const FString& _SoundGroup, float _Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSoftwareCursor(TEnumAsByte<EMouseCursor::Type> _Type, FSoftClassPath _ClassPath);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedSkill(USkill* _Skill);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsInminimap(bool bNewMinimap, EMinimapType _Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInputActionBinder(AInputActionBinder* _InputActionBinder);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredSkill(USkill* _Skill);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetHoveredActor(AActor* NewActorHovered);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDPadNavigationEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetClientViewportMousePosition(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    void SetAmbienceSoundVolume(float _Volume);
    
    UFUNCTION(BlueprintCallable)
    void SelectOverlay(UOverlay_WidgetComponent* _Overlay);
    
    UFUNCTION(BlueprintCallable)
    bool SelectActor(AActor* NewActorToSelect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultInputMappings();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReplaceWithInputImage(FText& Text, const TArray<FString>& InputImage) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReplaceActionBinding(FName ActionName, FInputChord OldChord, FInputChord NewChord);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGrapableActor(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveActionBinding(FName ActionName, FInputChord ChordToRemove);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayNewDialogueSound(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PausePhaseSoundTrack(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenActionMenu(AHumanoidMarine* Marine);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModalWindowVisibilityChanged(bool bOpen, bool bAffectMainUI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMediaPlayerOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMediaPlayerClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnMarineAddedToSquad(ASquad* _Squad, AHumanoidMarine* _Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogueSoundFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnControllerTypeChanged_Event(EnumControllerType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTutorialMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInMinimap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCinematicMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsEscapeMenuVisible() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsChordAlreadyMapped(const FInputActionKeyMapping& Mapping, FName ActionName, FInputChord Chord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheatMenuVisible() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETutorialState GetTutorialState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetSquad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShiftIsPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetSelectedSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSelectedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetPlayerActions(const FText& Text) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMinimapHandler* GetMinimapHandler() const;
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetMarineCaptureRenderTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyForInputAxis(FName _AxisName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyForInputAction(FName _ActionName, bool ForceGamepad) const;
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetItemCaptureRenderTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInputRichTextKeyByRowName(FName _RowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInputRichTextKeyByPlayerAction(FName _PlayerAction, const EnumControllerType& ControllerType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInputRichTextKeyByKey(const FKey& _Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInputRichTextKeyByAxis(FName _AxisName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInputRichTextKeyByAction(FName _ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetInputIconByRowName(FName _RowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetInputIconByKey(const FKey& _Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetInputIconByAxis(FName _AxisName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetInputIconByAction(FName _ActionName, bool ForceGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInputActionBinder* GetInputActionBinder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetInputAction_LocationStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetHoveredSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitResultsAtScreenPosition(const FVector2D ScreenPosition, const TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<FHitResult>& HitResult) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetGrapableActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormattedInputRichTextKeyByAxis(FName _AxisName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormattedInputRichTextKeyByAction(FName _ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormattedInputRichTextKey(const FKey& _Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDialogueSoundIsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetDialogueAudioComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescriptionWithInputImage(const FText& Text) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCursorLocationForAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCursorLocation() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UInputComponent*> GetCurrentInputStack();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetCaptureRenderTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidTactical*> GetAllSelectedMembersAsAHumanoidTactical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidTactical*> GetAllSelectedMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EscapeMenuOrDecoPopUpOpeningChanged(UObject* _Ref, bool _B);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMainGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseCombatMenu(bool _bAnimated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseActionMenu();
    
    UFUNCTION(BlueprintCallable)
    void ClearPauseAndSlowMo();
    
    UFUNCTION(BlueprintCallable)
    static void AskSlowMo_Static(UObject* _Ref, bool _B);
    
    UFUNCTION(BlueprintCallable)
    void AskSlowMo(UObject* _Ref, bool _B);
    
    UFUNCTION(BlueprintCallable)
    static void AskPause_Static(UObject* _Ref, bool _B);
    
    UFUNCTION(BlueprintCallable)
    void AskPause(UObject* _Ref, bool _B);
    
    UFUNCTION(BlueprintCallable)
    void AskHiddenCusor(UObject* _Ref, bool _Hidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ASFIsWorldPositionOnScreen(FVector WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ASFGetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ASFGetHitResultsUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<FHitResult>& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ASFDeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection) const;
    
    UFUNCTION(BlueprintCallable)
    void AddGrapableActor(AActor* _Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddActionBinding(FName ActionName, FInputChord ChordToAdd);
    
};

