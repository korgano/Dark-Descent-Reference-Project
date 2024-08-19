#pragma once
#include "CoreMinimal.h"
#include "MarineCustomSkinMaterial.h"
#include "MarineCustomSkin.generated.h"

USTRUCT(BlueprintType)
struct FMarineCustomSkin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarineCustomSkinMaterial> SkinMaterials;
    
    ASF_API FMarineCustomSkin();
};

