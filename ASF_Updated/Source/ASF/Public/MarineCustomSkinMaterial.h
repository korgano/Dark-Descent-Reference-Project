#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarineCustomSkinMaterial.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FMarineCustomSkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BodyPartTags;
    
    ASF_API FMarineCustomSkinMaterial();
};

