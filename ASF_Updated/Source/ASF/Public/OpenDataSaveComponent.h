#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "LevelOpenDataSaveStruct.h"
#include "OpenDataSaveComponent.generated.h"

class AASFGameModeBase_TacticalMode;
class AActor;
class ULevelSaveGame;
class ULevelSaveGameInstanceSubsystem;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UOpenDataSaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelOpenDataSaveStruct OpenDataOnBuild;
    
public:
    UOpenDataSaveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOpenDataRebuild(ULevelSaveGameInstanceSubsystem* _LevelSaveGameInstanceSubsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetSubLevelOwnerName(AASFGameModeBase_TacticalMode* _GameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetOpenDataTransform();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLevelOpenDataSaveStruct GetOpenDataOnBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateUncommunOpendata();
    
    UFUNCTION(BlueprintCallable)
    bool GenerateOpenData_int(ULevelSaveGame* _LevelSaveGame, FName SubLevelName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GenerateOpenData(ULevelSaveGameInstanceSubsystem* _SaveLoadSubSystem, AASFGameModeBase_TacticalMode* _GameMode, bool ForceOpenDataGeneration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateCurentLevelOpenData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static AActor* FindOpenDataActor(FName _ActorName, UObject* _WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanGenerateOpenData();
    
};

