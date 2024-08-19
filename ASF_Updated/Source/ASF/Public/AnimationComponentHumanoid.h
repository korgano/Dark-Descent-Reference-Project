#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AnimationComponent.h"
#include "EnumBaseManagementMode.h"
#include "EnumCharacterAimingState.h"
#include "EnumCharacterAnimAttitude.h"
#include "EnumCharacterBreakdownType.h"
#include "EnumCharacterHealingPart.h"
#include "EnumCharacterHeightState.h"
#include "EnumCharacterReactionType.h"
#include "EnumCocoonState.h"
#include "EnumMarineLocomotionOwner.h"
#include "Event_AnimAttitudeStateChangeDelegate.h"
#include "Event_AnimBreakdownStateChangeDelegate.h"
#include "Event_AnimComp_AimingStateDelegate.h"
#include "Event_AnimComp_BaseManagementModeDelegate.h"
#include "Event_AnimComp_BoolDelegate.h"
#include "Event_AnimComp_Bool_FloatDelegate.h"
#include "Event_AnimComp_Cocoon_CocoonStateDelegate.h"
#include "Event_AnimComp_FloatDelegate.h"
#include "Event_AnimComp_HumanoidDelegate.h"
#include "Event_AnimComp_TagDelegate.h"
#include "Event_AnimComp_Tag_FloatDelegate.h"
#include "Event_AnimComp_VectorDelegate.h"
#include "Event_AnimInteractiveComponentDelegate.h"
#include "Event_AnimNotifyDelegate.h"
#include "Event_AnimReactionDelegate.h"
#include "Event_EnumMarineLocomotionOwner_ObjectDelegate.h"
#include "Event_PartHealedDelegate.h"
#include "Event_ThrowItemDelegate.h"
#include "AnimationComponentHumanoid.generated.h"

class AASFCharacter;
class ACocoon;
class AHumanoid;
class UInteractiveComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAnimationComponentHumanoid : public UAnimationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterAimingState AimingState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_AimingState OnAimingStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterAnimAttitude Attitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterHeightState HeightState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterBreakdownType BreakdownType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterReactionType ReactionType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimReaction OnReaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimAttitudeStateChange OnAttitudeStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool OnChangeHeadAndLightLookAtInfluence;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimBreakdownStateChange OnBreakdownStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnKillYourself;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Float OnLaunchReload;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnStopReload;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool_Float OnLaunchSwapWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Tag_Float OnLaunchSwapItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnSwapItemHandReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnSwapItemHolderReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnSwapItemFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnSwapWeaponOtago;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ThrowItem OnThrowItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnLaunchGrenade;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Vector OnLaunchSergentOrder;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EnumMarineLocomotionOwner_Object OnLocomotionOwnerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumMarineLocomotionOwner LocomotionOwnerType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnCancelEnterPowerLoader;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimInteractiveComponent OnLaunchInteractiveComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimInteractiveComponent OnStopInteractiveComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnInteractionItemTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnInteractionItemHold;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PartHealed OnPartBeingHealdByAMate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Bool_Float OnLaunchShotgunBlast;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Cocoon_CocoonState OnCocoonStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Humanoid OnReleaseCocoonFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify LaunchWalkMarineSelection;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Tag OnMarineIsSendToOtagoRoom;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_BaseManagementMode OnChangeBaseManagementMode;
    
    UAnimationComponentHumanoid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwapWeaponOtago();
    
    UFUNCTION(BlueprintCallable)
    void StopReload();
    
    UFUNCTION(BlueprintCallable)
    void StopInteractiveComponentInteraction(UInteractiveComponent* InteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetReactionType(EnumCharacterReactionType _ReactionType);
    
    UFUNCTION(BlueprintCallable)
    void SetLocomotionOwner(EnumMarineLocomotionOwner OwnerEnum, UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    void SetHealedStatus(EnumCharacterHealingPart HealedPart);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadAndLightLookAt(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void SetCocoonState(ACocoon* Cocoon, EnumCocoonState CocoonState);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakdownType(EnumCharacterBreakdownType _BreakdownType);
    
    UFUNCTION(BlueprintCallable)
    void SetAttitude(EnumCharacterAnimAttitude _Attitude);
    
    UFUNCTION(BlueprintCallable)
    void SetAimingState(EnumCharacterAimingState NewAimingState);
    
    UFUNCTION(BlueprintCallable)
    void SendMarineToOtagoRoom(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCocoonFinished(AHumanoid* Humanoid);
    
    UFUNCTION(BlueprintCallable)
    void PlayWalkMarineSelection();
    
    UFUNCTION(BlueprintCallable)
    void PlayThrowItem(FVector _Direction, float _LaunchDuration);
    
    UFUNCTION(BlueprintCallable)
    void PlaySwapWeapon(bool IsMainWeapon, float SwapTime);
    
    UFUNCTION(BlueprintCallable)
    void PlaySwapItem(FGameplayTag ItemTag, float SwapTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayShotgunBlast(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void PlaySergentOrder(FVector OrderLocation);
    
    UFUNCTION(BlueprintCallable)
    void PlayReload(float ReloadTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayInteractiveComponentInteraction(UInteractiveComponent* InteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void LaunchGrenade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnconscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLyingDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWeldingLocation() const;
    
    UFUNCTION(BlueprintCallable)
    AASFCharacter* GetCarrierCharacter();
    
    UFUNCTION(BlueprintCallable)
    AASFCharacter* GetCarriedCharacter();
    
    UFUNCTION(BlueprintCallable)
    void FinishShotgunBlast(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBaseManagementMode(EnumBaseManagementMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void CancelEnterPowerLoader();
    
};

