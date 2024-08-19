#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "APCRoadProgressForTrigger.h"
#include "ECardinal.h"
#include "Event_SplineRoad_RunnerDelegate.h"
#include "SplineRoad_Location.h"
#include "AC_SplineRoad_Runner.generated.h"

class AASFGameState_TacticalMode;
class AExtractionTransport;
class ASplineRoad;
class UArrowComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAC_SplineRoad_Runner : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSplineRoad_Location CurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSplineRoad_Location DestinationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASplineRoad*> CurrentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deceleration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SplineRoad_Runner OnArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SplineRoad_Runner OnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RunningTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float CurrentVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ForceVelocityCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ECardinal, UArrowComponent*> WheelsLocations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAPCRoadProgressForTrigger> RoadTriggers;
    
public:
    UAC_SplineRoad_Runner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRotationXY();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRegisterPath(FSplineRoad_Location _NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLocation(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationLocation(FSplineRoad_Location Destination);
    
    UFUNCTION(BlueprintCallable)
    void Run(bool _Run);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRoadTrigger(FAPCRoadProgressForTrigger& Trigger);
    
    UFUNCTION(BlueprintCallable)
    void PlaceInPosition();
    
    UFUNCTION(BlueprintCallable)
    void OnApcRegister(AASFGameState_TacticalMode* GameState, AExtractionTransport* ExtractionTransport);
    
    UFUNCTION(BlueprintCallable)
    static float GetPathRemainingDist(const TArray<ASplineRoad*>& _Path, FSplineRoad_Location _Start, FSplineRoad_Location _Dest);
    
    UFUNCTION(BlueprintCallable)
    FSplineRoad_Location GetLocationAheadInPath(float Dist);
    
    UFUNCTION(BlueprintCallable)
    TArray<ASplineRoad*> FindPathTo(FSplineRoad_Location Destination);
    
    UFUNCTION(BlueprintCallable)
    void Debug_MoveToDest();
    
    UFUNCTION(BlueprintCallable)
    void AddRoadTrigger(FAPCRoadProgressForTrigger& NewTrigger);
    
};

