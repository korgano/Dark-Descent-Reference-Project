#pragma once
#include "CoreMinimal.h"
#include "PropertySaveStruct.h"
#include "EffectSaveStruct.generated.h"

class UTinda_Effect;

USTRUCT(BlueprintType)
struct FEffectSaveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> EffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertySaveStruct> Properties;
    
    ASF_API FEffectSaveStruct();
};

