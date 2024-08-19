#pragma once
#include "CoreMinimal.h"
#include "HitSoundStruct.h"
#include "WeaponCosmetic.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct ASF_API FWeaponCosmetic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitSoundStruct HitSoundStruct;
    
    FWeaponCosmetic();
};

