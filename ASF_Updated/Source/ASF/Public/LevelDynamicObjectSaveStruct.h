#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelObjectSaveStruct.h"
#include "LevelDynamicObjectSaveStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLevelDynamicObjectSaveStruct : public FLevelObjectSaveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubLevel;
    
    ASF_API FLevelDynamicObjectSaveStruct();
};

