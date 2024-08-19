#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EnumUpgradeAttachmentType.h"
#include "UpgradeEquipment.generated.h"

class AHumanoid;
class AWeapon;
class UCombatComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASF_API AUpgradeEquipment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EquipmentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumUpgradeAttachmentType AttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery WeaponQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* AttachParentHumanoid;
    
public:
    AUpgradeEquipment(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHumanoidWeaponChanged(UCombatComponent* _CombatComponent, AWeapon* _Weapon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagQuery GetWeaponQuery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSocketName() const;
    
    UFUNCTION(BlueprintCallable)
    void AttachToHumanoid(AHumanoid* Humanoid);
    
};

