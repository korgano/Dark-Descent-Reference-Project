#pragma once
#include "CoreMinimal.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "LevelFogOfWar.h"
#include "LevelObjectSaveStruct.h"
#include "LevelOpenDataSaveStruct_Array.h"
#include "LevelSaveStruct.generated.h"

USTRUCT(BlueprintType)
struct FLevelSaveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLevelObjectSaveStruct> SavedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelDynamicObjectSaveStruct> SavedDynamicObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLevelFogOfWar> SavedFOW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLevelOpenDataSaveStruct_Array> LevelsOpenData;
    
    ASF_API FLevelSaveStruct();
};

