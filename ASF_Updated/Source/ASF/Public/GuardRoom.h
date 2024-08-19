#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FormationPattern.h"
#include "GuardRoom.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AHumanoidTactical;
class ARoomCluster;
class ASubLevelHandler;
class UCommonSaveLoadComponent;

UCLASS(Blueprintable)
class ASF_API AGuardRoom : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RoomGraphIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> FreeIdlePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentPattern;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> IdlePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormationPattern> FormationPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> MeleeAlertedPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* SaveComponent;
    
    AGuardRoom(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterRebuilt(ARoomCluster* _RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable)
    void NextPattern();
    
    UFUNCTION(BlueprintCallable)
    bool IsGraphIdInsideOfRoom(int32 _GraphID);
    
    UFUNCTION(BlueprintCallable)
    bool GetRandomReachableLocation(AASFCharacter* _Character, TArray<FTransform> _Locations, FTransform& _LocFound);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetNextPatternPosition(AHumanoidTactical* _Character);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetMeleeAlertedPattern(AHumanoidTactical* _Character);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetIdlePoint(AASFCharacter* _Character, FTransform _LastIdlePointVisited);
    
    UFUNCTION(BlueprintCallable)
    void FreeIdlePoint(FTransform _IdlePointFreed);
    
};

