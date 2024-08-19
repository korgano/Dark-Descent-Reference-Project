#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "EActivityAnimationType.h"
#include "ESkillSelectionStatus.h"
#include "EnumActionStatus.h"
#include "Event_SkillDelegate.h"
#include "Event_Skill_BoolDelegate.h"
#include "Event_Skill_ErrorMapDelegate.h"
#include "Event_Skill_HumanoidTacticalDelegate.h"
#include "Event_Skill_SkillSelectionStatusDelegate.h"
#include "Event_Skill_StatusDelegate.h"
#include "Event_Skill_VectorDelegate.h"
#include "Skill_Params.h"
#include "Skill.generated.h"

class AActor;
class AHumanoidTactical;
class ASkillFeedback;
class ASquad;
class ASubLevelHandler;
class AWeapon;
class UCombatComponent;
class USkill;
class USkill_DataAsset;
class UTexture2D;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;
class UUserWidget;

UCLASS(Blueprintable)
class ASF_API USkill : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASkillFeedback> FeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CharacterBlockerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CharacterNeededTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CharacterSwitchBackgroundTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedToBeEmptyHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedWeaponCompatibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> SpecificWidgetButton;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeVisibleInCombatMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInBackGround;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill OnCooldownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill OnCooldownFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill OnValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_ErrorMap OnErrorsDetected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_Status OnSkillEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill OnSkillLaunched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill OnSkillSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill OnSkillUnselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeCanceledByStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeCanceledByDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeCanceledByDamageOnlyMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeCanceledByImmobilization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualyUpdateInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceManualyUpdateInstigator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTinda_Effect>> SkillEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Effect*> SkillEffectsApplied;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_Bool OnLockStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_Bool OnShouldBeVisibleInCombatMenuChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_Bool OnSkillIsHilightedForTutorialUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHighlightForTutorial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillSelectionStatus SkillSelectionStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_SkillSelectionStatus On_SkillSelectionStatus_Changed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponent* InstigatorCombatComp;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_HumanoidTactical OnInstigatorChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkillFeedback* SkillFeedback;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill_Vector OnLocationSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEmitteAINoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AINoiseLoudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AINoiseMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchInstigator;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkill_Params Skill_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill_DataAsset* PDA_Skill;
    
    USkill();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Validate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInstigator();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unselect(bool _Validated);
    
    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnInitLaunch(EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void TickEvent(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToPreviousInstigator();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToNextInstigator();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchSkillInBackGround();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchSkillBackToForeGround();
    
    UFUNCTION(BlueprintCallable)
    void StopTick();
    
    UFUNCTION(BlueprintCallable)
    void SetSkillSelectionStatus(ESkillSelectionStatus _SkillSelectionStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillFeedback(ASkillFeedback* _SkillFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeVisibleInCombatMenu(bool _bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHilightForTutorial(bool bNewHilight);
    
    UFUNCTION(BlueprintCallable)
    void SetInstigator(AHumanoidTactical* _Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetForcedSavedStartLocationEvent(FVector _Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AHumanoidTactical* SelectPreviousInstigator(const TArray<AHumanoidTactical*>& _PotentialInstigators);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AHumanoidTactical* SelectNextInstigator(const TArray<AHumanoidTactical*>& _PotentialInstigators);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AHumanoidTactical* SelectBestInstigator(const TArray<AHumanoidTactical*>& _PotentialInstigators);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySkillAcknow();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInstigatorWeaponChanged(UCombatComponent* CombatComponent, AWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnInstigatorDamageReceived(AActor* ActorWounded, const FDamageResultStruct& Damage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCooldownFinished_Internal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivityTick(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetValid_Intern();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHilightForTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitLaunch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetSquadSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetSquad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSkillTargetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSkillName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetSkillIcon_Little();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetSkillIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASkillFeedback* GetSkillFeedback() const;
    
    UFUNCTION(BlueprintCallable)
    EActivityAnimationType GetSkillAnimationType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldBeVisibleInCombatMenu();
    
    UFUNCTION(BlueprintCallable)
    TArray<AHumanoidTactical*> GetPotentialInstigators(TMap<AActor*, FGameplayTagContainer>& ErrorTagContairers);
    
    UFUNCTION(BlueprintCallable)
    bool GetNeedToBeEmptyHanded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetItemNeededForSwapping();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetItemNeeded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidTactical* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownRemainingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownElapsedTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCharacterOrientation_Desired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCharacterAimingLocation_Desired();
    
    UFUNCTION(BlueprintCallable)
    void ForceStopCooldown();
    
    UFUNCTION(BlueprintCallable)
    void ForceStartCooldown();
    
    UFUNCTION(BlueprintCallable)
    void EndSkill(EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void CheckTags_SwitchBackground(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelSkillIndoor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBeLaunched_BySquad(TMap<AActor*, FGameplayTagContainer>& ErrorTagContairersMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBeLaunched_ByInstigator(FGameplayTagContainer& ErrorReasons);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBeLaunched(TArray<AHumanoidTactical*>& potentialInstigators, TMap<AActor*, FGameplayTagContainer>& ErrorTagContairersMap);
    
};

