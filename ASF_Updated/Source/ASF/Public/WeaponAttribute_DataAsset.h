#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MarineAttributeDataAssets.h"
#include "WeaponAttribute_DataAsset.generated.h"

class AWeapon;
class USkeletalMesh;
class UStaticMesh;
class UWeaponPrimaryDataAsset;

UCLASS(Blueprintable)
class ASF_API UWeaponAttribute_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> HolsterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CodexEntryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponPrimaryDataAsset* PDA_Weapon;
    
    UWeaponAttribute_DataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetWeaponTrainingTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription();
    
};

