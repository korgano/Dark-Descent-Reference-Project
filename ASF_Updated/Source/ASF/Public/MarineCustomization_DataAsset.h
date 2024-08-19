#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "MarineCustomHair.h"
#include "MarineCustomHairColor.h"
#include "MarineCustomOutfit.h"
#include "MarineCustomScar.h"
#include "MarineCustomSkin.h"
#include "MarineCustomTattoo.h"
#include "MarineCustomization_DataAsset.generated.h"

class UObject;
class USkeletalMesh;

UCLASS(Blueprintable)
class ASF_API UMarineCustomization_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NameCharacterLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NicknameCharacterLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> FaceMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> FaceMeshes_F;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomSkin> Skins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomSkin> Skins_F;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomHair> Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomHair> Hair_F;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomHair> FacialHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomHairColor> HairColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomScar> HeadScars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomScar> BodyScars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomTattoo> Tattoos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomOutfit> OutfitArmors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomOutfit> OutfitFabrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomOutfit> PreorderOutfitArmors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomOutfit> PreorderOutfitFabrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> HideableBodyMeshTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<USkeletalMesh>> ProsthesisMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<USkeletalMesh>> ProsthesisMeshes_F;
    
    UMarineCustomization_DataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    TArray<FMarineCustomOutfit> GetOutfitFabrics(const UObject* _WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    TArray<FMarineCustomOutfit> GetOutfitArmors(const UObject* _WorldContext) const;
    
};

