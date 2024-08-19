#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESaveType.h"
#include "EffectSaveStruct.h"
#include "PropertySaveStruct.h"
#include "LevelObjectSaveStruct.generated.h"

USTRUCT(BlueprintType)
struct FLevelObjectSaveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertySaveStruct> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESaveType> SaveTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectSaveStruct> Effects;
    
    ASF_API FLevelObjectSaveStruct();
};

