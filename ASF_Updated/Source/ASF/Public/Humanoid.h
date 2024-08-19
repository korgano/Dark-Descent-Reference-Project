#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ASFCharacter.h"
#include "DamageResultStruct.h"
#include "DataCarrierMarine.h"
#include "EGender.h"
#include "EMarineNameDisplayMode.h"
#include "EMarineRank.h"
#include "EStressStep.h"
#include "EVoiceProfile.h"
#include "EnumDestroyReason.h"
#include "EnumWound.h"
#include "Event_HumanoidDelegate.h"
#include "Event_Humanoid_ActionManagerDelegate.h"
#include "Event_Humanoid_AttributeDelegate.h"
#include "Event_Humanoid_Attribute_int32Delegate.h"
#include "Event_Humanoid_LvlDelegate.h"
#include "Event_Humanoid_UpgradeDelegate.h"
#include "Event_Humanoid_XpDelegate.h"
#include "Event_Humanoid_boolDelegate.h"
#include "Event_int32Delegate.h"
#include "HumanoidType.h"
#include "MarineCustomization.h"
#include "Selectable.h"
#include "StructCursorHit.h"
#include "Templates/SubclassOf.h"
#include "TraumaApplied.h"
#include "Humanoid.generated.h"

class AActor;
class ACocoon;
class AMarineSlot;
class ASubLevelHandler;
class UAC_Trauma;
class UAction;
class UAction_TakePosition;
class UAudioComponent;
class UCapsuleComponent;
class UFOWActorVisibilityComponent;
class UFactionSystemic;
class UHumanoidActionManager;
class UInteractiveComponent;
class UMarineAttributeDataAssets;
class UMarineClassDataAssets;
class UPhysicsAsset;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class UTinda_Effect;
class UTrait_DataAsset;
class UUpgradeDataAssets;
class UWeaponAttribute_DataAsset;

UCLASS(Blueprintable)
class ASF_API AHumanoid : public AASFCharacter, public ISelectable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UMarineClassDataAssets* DataAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid OnInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* PhaseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 HumanoidID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MissionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UMarineAttributeDataAssets*> PerkAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<UMarineAttributeDataAssets*, int32> StateAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UWeaponAttribute_DataAsset*> WeaponAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UUpgradeDataAssets*> UpgradeAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ReceivedWounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ProstheticLimbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float LostHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasNewAvailableUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UUpgradeDataAssets*> NewAvailableUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UTrait_DataAsset* Trait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TurnOfDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 InitialBravery;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<HumanoidType> Type;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAC_Trauma* AC_Trauma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraumaApplied Trauma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USkeletalMeshComponent*> BodyPartMeshComponents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Attribute_int32 OnAttributeAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Attribute OnAttributeRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUpgradeDataAssets* PreviewUpgrade;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Upgrade OnUpgradeAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Upgrade OnUpgradeRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool SaveOnExtract;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbXPPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LevelGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UMarineClassDataAssets*> RandomizedClassPicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UMarineAttributeDataAssets*> RandomizedCommonPerkPicks;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Xp Event_Humanoid_Xp_Change;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Lvl Event_Humanoid_Lvl;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_bool OnIsHoveredChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* InteractiveObjectCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAction_TakePosition> TakePositionActionClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAction> MoveFormationActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHumanoidActionManager* HumanoidActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHumanoidActionManager> HumanoidActionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_ActionManager OnActionManagerInit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BodyOrientation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDestroyReason ReasonOnDestroy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractiveComponent> SearchCorpseInteractiveComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool DeathSlideAlreadyPlayed;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_int32 OnVoicePlaybackFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VoiceComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMarineSlot* CurrentMarineSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ACocoon* HostCocoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarineCustomization Customization;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStressStep MaxStressStepAchieved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> AttachedSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOWActorVisibilityComponent* FOWVisibilityComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseURO;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> BodyPartsSK;
    
    AHumanoid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VacateCurrentMarineSlot();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateNewAvailableUpgrades(EMarineRank _NewUpgradeTier);
    
    UFUNCTION(BlueprintCallable)
    void UpdateClassPerks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ToDataCarrierMarine(FDataCarrierMarine& _DataCarrierMarine) const;
    
    UFUNCTION(BlueprintCallable)
    void SetupLight();
    
    UFUNCTION(BlueprintCallable)
    void SetTrait(UTrait_DataAsset* _Trait);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationVelocity(float _RotationVelocity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRandomizedPerkPicks(TArray<UMarineAttributeDataAssets*> _PerkPicks);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPreviewUpgrade(UUpgradeDataAssets* _Upgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMeshFromClass(UMarineClassDataAssets* _ClassAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelGain(int32 _LevelGain);
    
    UFUNCTION(BlueprintCallable)
    void SetHumanoidID(int32 _Id);
    
    UFUNCTION(BlueprintCallable)
    void SetHostCocoon(ACocoon* Cocoon, bool BypassReleaseAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeadSpotlightIsActive(bool _bIsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationActor(AActor* _DestinationActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathSlideAlreadyPlayed(bool _DeathSlideAlreadyPlayed);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationName(const FString& _Name);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomization(FMarineCustomization _Customization);
    
    UFUNCTION(BlueprintCallable)
    void SetClass(UMarineClassDataAssets* _ClassAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyOrientation(FVector _BodyOrientation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RotateCapture(float _DeltaAngle);
    
    UFUNCTION(BlueprintCallable)
    void ResetLostHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCaptureRotation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWound(FGameplayTag _WoundTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUpgrade(FGameplayTag _UpgradeTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrait(UTrait_DataAsset* _Asset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveState(FGameplayTag _AttributeTag);
    
    UFUNCTION(BlueprintCallable)
    void RemovePerk(FGameplayTag _AttributeTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewAvailableUpgrade(UUpgradeDataAssets* _Upgrade);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBodypartMeshFromMarine(FGameplayTag BodyPartTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedSceneComponent(USceneComponent* _SceneComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreloadWeaponTraitAndTrauma();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnWoundReceived(AActor* _ActorWounded, const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceAudioFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSelfDeath(AASFCharacter* killedActor, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshLoadIsFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemyPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageReceived(AActor* _ActorWounded, const FDamageResultStruct& _Damage);
    
    UFUNCTION(BlueprintCallable)
    void OccupyMarineSlot(AMarineSlot* _Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsProstheticLimb() const;
    
    UFUNCTION(BlueprintCallable)
    void MergeBodypartsSkeletalMeshes();
    
    UFUNCTION(BlueprintCallable)
    void LoadDataCarrierMarine(const FDataCarrierMarine& _DataCarrierMarine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTreated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainedForWeapon(UWeaponAttribute_DataAsset* _WeaponAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrained() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkActive(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIntensiveTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExhausted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void InitInventory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeAttributeAndClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpperLevelPerk(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpgrade(FGameplayTag _UpgradeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTraitWithTag(const FGameplayTag& TraitTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrait(UTrait_DataAsset* TraitDataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasState(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPrerequisitesForUpgrade(UUpgradeDataAssets* _Upgrade) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPerk(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClassTierUpgrade() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleReleasedFromCocoon(ACocoon* Cocoon, bool BypassReleaseAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHostedInCocoon(ACocoon* Cocoon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWoundCount(EnumWound _WoundType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWeaponAttribute_DataAsset*> GetWeaponAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponAttribute_DataAsset* GetWeaponAttributeForSlot(FGameplayTag _WeaponSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoiceProfile GetVoiceProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetVoiceComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUpgradeDataAssets*> GetUpgradeAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrait_DataAsset* GetTrait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateDuration(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetShortName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetRequiredProstheticLimb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineAttributeDataAssets*> GetPerkAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNbXPPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNavigationLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNameText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName(EMarineNameDisplayMode _DisplayMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMarineRank GetMarineRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelGain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetInitialBravery();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHumanoidID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACocoon* GetHostCocoon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetHiddenMeshTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGender GetGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFullName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetDisplayLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDestinationActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDeathSlideAlreadyPlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMarineCustomization GetCustomization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMarineSlot* GetCurrentMarineSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLODLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCommonPerkSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetClassTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCarryingCapacity(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<AActor*> GetCaptureActors() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<USkeletalMeshComponent*> GetBodyPartMeshComponents(FGameplayTag _BodyPartTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBodyOrientation() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceLODOnMesh(int32 InNewForcedLOD);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FillRandomizedPerkPicks();
    
public:
    UFUNCTION(BlueprintCallable)
    void FillRandomizedClassPicks();
    
    UFUNCTION(BlueprintCallable)
    void EnableSkeletalRender(bool _IsEnable, USkinnedMeshComponent* _SKComp);
    
    UFUNCTION(BlueprintCallable)
    void EnableHumanoidRender(bool _IsEnable);
    
    UFUNCTION(BlueprintCallable)
    bool DecreaseStateDuration(FGameplayTag _AttributeTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearWounds();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearRandomizedPerkPicks();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearAllNextActionsAndActivities();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllActionsAndActivities();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Capture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTrain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAutoHealTrauma() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyWeaponAttribute(UWeaponAttribute_DataAsset* _WeaponAttribute, bool _UpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVisualCustomization();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDefaultWeaponAttributes();
    
    UFUNCTION(BlueprintCallable)
    void AddXPPoints(int32 _XpGained);
    
    UFUNCTION(BlueprintCallable)
    void AddWound(FGameplayTag _WoundTag);
    
    UFUNCTION(BlueprintCallable)
    void AddUpgrade(UUpgradeDataAssets* _Upgrade);
    
    UFUNCTION(BlueprintCallable)
    void AddState(UMarineAttributeDataAssets* _Attribute, int32 _Duration);
    
    UFUNCTION(BlueprintCallable)
    void AddRequiredProstheticLimb();
    
    UFUNCTION(BlueprintCallable)
    void AddProstheticLimb(const FGameplayTag& _LimbTag);
    
    UFUNCTION(BlueprintCallable)
    void AddPerk(UMarineAttributeDataAssets* _Attribute);
    
    UFUNCTION(BlueprintCallable)
    void AddNewAvailableUpgrade(UUpgradeDataAssets* _Upgrade);
    
    UFUNCTION(BlueprintCallable)
    void AddMedbayRecoveryDuration(int32 _Days);
    
    UFUNCTION(BlueprintCallable)
    void AddLostHealth(float _Health);
    
    UFUNCTION(BlueprintCallable)
    void AddBodypartMeshToMarine(USkeletalMesh* NewBodyPart, UPhysicsAsset* PhysicsAsset, FGameplayTag BodyPartTag, bool IsMainMesh);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachedSceneComponent(USceneComponent* _SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    UAction* AddAction(UAction* _Action);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool _bIsSelected) override PURE_VIRTUAL(SetSelected,);
    
    UFUNCTION(BlueprintCallable)
    bool Interact(FStructCursorHit _StructCursorHit, bool _bShift) override PURE_VIRTUAL(Interact, return false;);
    
};

