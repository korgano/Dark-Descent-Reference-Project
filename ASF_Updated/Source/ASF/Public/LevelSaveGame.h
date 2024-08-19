#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ESaveType.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "LevelFogOfWar.h"
#include "LevelObjectSaveStruct.h"
#include "LevelOpenDataSaveStruct_Array.h"
#include "LevelSaveStruct.h"
#include "LevelSaveGame.generated.h"

UCLASS(Blueprintable)
class ASF_API ULevelSaveGame : public USaveGame {
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
    
    ULevelSaveGame();

    UFUNCTION(BlueprintCallable)
    void MergeGenericSave(FLevelSaveStruct& GenericSave);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLevelDynamicObjectSaveStruct> GetDisplayableDynamicObject(FName SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void ClearDynamicSavedObjectsInSubLevel(const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllSavedObjectsWithoutSaveType(ESaveType _SaveType);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllSavedObjectsWithOnlySaveType(ESaveType _SaveType);
    
};

