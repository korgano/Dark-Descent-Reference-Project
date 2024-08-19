#pragma once
#include "CoreMinimal.h"
#include "LevelOpenDataSaveStruct.h"
#include "LevelOpenDataSaveStruct_Array.generated.h"

USTRUCT(BlueprintType)
struct FLevelOpenDataSaveStruct_Array {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLevelOpenDataSaveStruct> LevelOpenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenericData;
    
    ASF_API FLevelOpenDataSaveStruct_Array();
};

