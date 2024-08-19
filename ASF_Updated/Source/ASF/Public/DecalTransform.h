#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DecalTransform.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDecalTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DecalTransform;
    
    ASF_API FDecalTransform();
};

