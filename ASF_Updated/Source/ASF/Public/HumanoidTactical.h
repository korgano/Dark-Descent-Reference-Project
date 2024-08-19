#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Event_Humanoid_CharacterDelegate.h"
#include "Event_Humanoid_WeaponDelegate.h"
#include "Event_SquadInitDelegate.h"
#include "Humanoid.h"
#include "SpawnedHumanCustomLoot.h"
#include "Templates/SubclassOf.h"
#include "HumanoidTactical.generated.h"

class AActor;
class ASquad;
class AWeapon;
class UCombatComponent;
class UInventoryComponent;
class UMapFeedbackDataComponent;
class UMarinesAIActionComponent;
class USkillManagerComponent;
class USpotLightComponent;
class USquadMember;
class UTrackedComponent;

UCLASS(Blueprintable)
class ASF_API AHumanoidTactical : public AHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Weapon OnWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Weapon OnEmptyWeaponReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Character OnEnemyKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketWeaponEquipedPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketWeaponEquipedSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbBulletPrimaryWeaponSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbBulletSecondaryWeaponSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* OverheadSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillManagerComponent* SkillManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrackedComponent* TrackedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapFeedbackDataComponent* MapFeedbackDataComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SquadInit SquadInit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USquadMember* SquadMemberComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowFormation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SavedDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestinationPrevisualisationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DestinationPrevisualisationActorClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarinesAIActionComponent* AI_ActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerBetweenSaveTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDelayBeforeNextTransformSave;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SavedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedToUseSavedTransformForSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnedHumanCustomLoot CustomLoot;
    
    AHumanoidTactical(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WeaponFired(AWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponChanged(UCombatComponent* _CombatComponent, AWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void ShowHumanoid();
    
    UFUNCTION(BlueprintCallable)
    void SetSquad(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomLoot(const FSpawnedHumanCustomLoot& InCustomLoot);
    
    UFUNCTION(BlueprintCallable)
    void LeaveExtractionTransport(const FString& _TransportName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsindependantFromSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HumanoidFollowFormationAsAlly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HumanoidFollowFormation();
    
    UFUNCTION(BlueprintCallable)
    void HideHumanoid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrackedComponent* GetTrackedComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkillManagerComponent* GetSkillManagerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpotLightComponent* GetOverheadSpotLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapFeedbackDataComponent* GetMapFeedbackDataComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatComponent* GetCombatComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UMarinesAIActionComponent* GetActionComponent();
    
    UFUNCTION(BlueprintCallable)
    void EnterExtractionTransport(const FString& _TransportName, bool _IsExtracted);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomLoot(const FSpawnedHumanCustomLoot& InCustomLoot);  
};