#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AnimInstanceCharacter.h"
#include "EActivityAnimationType.h"
#include "EGender.h"
#include "EnumAlienAttackType.h"
#include "EnumCarrierType.h"
#include "EnumCharacterAnimAttitude.h"
#include "EnumCharacterAnimStance.h"
#include "EnumCharacterBreakdownType.h"
#include "EnumCharacterCarriedItem.h"
#include "EnumCharacterHealingPart.h"
#include "EnumCharacterWearingFacehuggerState.h"
#include "EnumCocoonState.h"
#include "EnumDismemberedState.h"
#include "EnumHumanoidClass.h"
#include "EnumMarineLocomotionOwner.h"
#include "AnimInstanceHumanoid.generated.h"

class AASFCharacter;
class ACocoon;
class AItem;
class AWeapon;
class UActivity;
class UAnimMontage;
class UAnimSequenceBase;
class UCurveFloat;
class UInteractiveComponent;
class UObject;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstanceHumanoid : public UAnimInstanceCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RagdollGetUpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumHumanoidClass HumanoidClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityAnimationType CurrentActivityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivity* CurrentActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* CurrentInteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentActivityNeedEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnconscious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fWeldSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fWeldStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fWeldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimWelding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimUnwelding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndSearchCrateWithClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterAnimStance AnimStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterAnimAttitude Attitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nIdLootCorpseVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLightDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentLookAtLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLightDestinationNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentLookAtLightNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationLightNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterLookAtNPC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeathSlideTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathSlideTimer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterBreakdownType BreakdownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumMarineLocomotionOwner LocomotionOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PowerLoaderMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform APCInteractionTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APCEnterCorrectionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APCLeaveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector APCLeaveAPCLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator APCLeaveMeshBaseLocalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator APCLeaveInitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APCLeaveOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APCLeaveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float APCLeaveVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterCarriedItem CarriedItem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* CarriedMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* CarrierCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCarrierType CarrierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerDropEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerCarryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimCarryTaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimCarryTaked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageCarryTaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageCarryTaked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshIsAttachedToCarrier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsWeaponVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CurrentWeaponVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCocoonState CocoonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInReleaseCocoonMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimerReleaseCocoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerReleaseCocoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CocoonedInitialLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimReleaseCocoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterWearingFacehuggerState WearingFacehuggerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TackleStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienAttackType AttackChoreography;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveTackle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterHealingPart CurrentHealedPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResteEnPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDismemberedState WoundedLegState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SyringeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SyringeMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStandingCanMove;
    
    UAnimInstanceHumanoid();

    UFUNCTION(BlueprintCallable)
    void UpdateTackle(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateReleaseCocoon(float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFacehuggerState(float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDeathSlide(float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterLookatNPC(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterLookat(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAPCLeave(float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAPCEnterCorrection(float fDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwapItem(FGameplayTag ItemTag, float SwapTime);
    
    UFUNCTION(BlueprintCallable)
    void StopReleaseCocoonMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopDragging(bool _NoAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StartWelding(float WeldSign, float WeldAnimationDuration, UActivity* Activity);
    
    UFUNCTION(BlueprintCallable)
    void StartReleaseCocoonMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDragging(bool _NoAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDragged(bool _NoAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSyringe();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSyringeVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLyingDown();
    
    UFUNCTION(BlueprintCallable)
    void SendStopCurrentActivity();
    
    UFUNCTION(BlueprintCallable)
    void SendStopActivity(UActivity* Activity);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromPlay(AASFCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCocoonFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponChanged(AWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnUnconsciousEffectChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemChanged(AASFCharacter* Character, AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnFacehuggerEffectChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeAttackChoreography(EnumAlienAttackType AttackType, AASFCharacter* OtherCharacter, FVector Destination);
    
    UFUNCTION(BlueprintCallable)
    void OnAttitudeChange(EnumCharacterAnimAttitude NewAttitude);
    
    UFUNCTION(BlueprintCallable)
    void OnAlertEffectChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void KillYourself();
    
    UFUNCTION(BlueprintCallable)
    void InstantSwap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EnumCharacterCarriedItem GetItemEnumFromTag(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable)
    void DropSyringe();
    
    UFUNCTION(BlueprintCallable)
    void DropEndAnimForCarrier();
    
    UFUNCTION(BlueprintCallable)
    void DropEndAnimForCarried();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeathSlide();
    
    UFUNCTION(BlueprintCallable)
    void CheckUnconscious(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeLocomotionOwner(EnumMarineLocomotionOwner OwnerEnum, UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeCocoonState(ACocoon* Cocoon, EnumCocoonState NewCocoonState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBreakdown(EnumCharacterBreakdownType NewBreakdownType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAdorationState(bool IsInAdoration);
    
    UFUNCTION(BlueprintCallable)
    void CarryEndAnimForCarrier();
    
    UFUNCTION(BlueprintCallable)
    void CarryEndAnimForCarried();
    
    UFUNCTION(BlueprintCallable)
    void CancelCarryForCarrier();
    
    UFUNCTION(BlueprintCallable)
    void CancelCarryForCarried();
    
    UFUNCTION(BlueprintCallable)
    void AddToPlay(AASFCharacter* Character, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivityStart(UActivity* Activity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivityEnd(UActivity* Activity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionStop(FGameplayTag ActionStateTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActionStart(FGameplayTag ActionStateTag);
    
};

