#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "EMovementOrderFrom.h"
#include "OpenDataWidget.h"
#include "SubLevelID.h"
#include "EntryPoint.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AEntryPoint;
class ASubLevelHandler;
class UMapFeedbackDataProperties;
class UObject;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AEntryPoint : public AActorWithGameplayTag, public IOpenDataWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString EntryPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText EntryPointText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSubLevelID SubLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntryPointWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance_SpawnAPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Velocity_SpawnAPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayCanAskMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSelectableForMissionLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsATransitionNotInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID TransitionNotInPlace_SubLevelNameFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID TransitionNotInPlace_SubLevelNameTo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
public:
    AEntryPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHander);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSelectableForMissionLaunch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetRotationToSpawnCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLocationToSpawnSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLocationToSpawnCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AEntryPoint* GetEntryPointToSpawnSquad(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetCameraInitialRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AskAPCMovement(const FString& _APCName, EMovementOrderFrom MovementOrderFrom);
    

    // Fix for true pure virtual functions not being implemented
};

