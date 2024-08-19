#pragma once
#include "CoreMinimal.h"
#include "ESaveType.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "SaveLoadComponent.h"
#include "DynamiqueSaveLoadComponent.generated.h"

class AMinimapHandler;
class ASubLevelHandler;
class ULevelSaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDynamiqueSaveLoadComponent : public USaveLoadComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasToBeInsertedToSaveList;
    
    UDynamiqueSaveLoadComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMinimapData(AMinimapHandler* MinimapHandler);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveAndDestroyParentActor(ESaveType _SaveType, ULevelSaveGame* _LevelSaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSubLevelUnload(ASubLevelHandler* _SubLevelHandler, const FString& _SubLevel);
    
    UFUNCTION(BlueprintCallable)
    void GenerateDynamicObjectSaveStruct(FLevelDynamicObjectSaveStruct& _DynamicObjectSaveStruct, const FString& _SubLevelName);
    
};

