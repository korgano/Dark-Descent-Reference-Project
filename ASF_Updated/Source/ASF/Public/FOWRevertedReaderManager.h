#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Event_UFOWRevertedReaderManager_UFOWRevertedReaderDelegate.h"
#include "SubLevelFOW.h"
#include "FOWRevertedReaderManager.generated.h"

class UFOWRevertedReader;
class ULevelSaveGame;
class UMaterialInstanceDynamic;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable)
class ASF_API UFOWRevertedReaderManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSubLevelFOW> LevelFOW;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UFOWRevertedReaderManager_UFOWRevertedReader OnNewReaderLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveGame* SaveGame;
    
public:
    UFOWRevertedReaderManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D WorldToMinimapUV(FVector Position, FName LevelName, FName SubLevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D Vector_WorldToMinimapUV(FVector Vector, FName LevelName, FName SubLevelName) const;
    
    UFUNCTION(BlueprintCallable)
    void SaveSubLevel(FName LevelName, FName SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSubLevel(FName LevelName, FName SubLevelName, bool bAllowReload, bool bAllowSaveGeneration);
    
    UFUNCTION(BlueprintCallable)
    void LoadFromGivenSave(ULevelSaveGame* SaveToLoadFrom);
    
    UFUNCTION(BlueprintCallable)
    void LoadAllSubLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    void Init(UObject* _WorldContext);
    
    UFUNCTION(BlueprintCallable)
    UFOWRevertedReader* GetSubLevelReaderByName(FName LevelName, FName SubLevelName, bool bTryLoadIfNot, bool bAllowReload, bool bAllowSaveGeneration);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetSubLevelMinimapTextureByName(FName LevelName, FName SubLevelName, bool bTryLoadIfNot, bool bAllowSaveGeneration);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetSubLevelMinimapByName(FName LevelName, FName SubLevelName, bool bTryLoadIfNot, bool bAllowSaveGeneration);
    
    UFUNCTION(BlueprintCallable)
    void ClearFOW(FName LevelName, FName SubLevelName, bool OnlyMinimap);
    
};

