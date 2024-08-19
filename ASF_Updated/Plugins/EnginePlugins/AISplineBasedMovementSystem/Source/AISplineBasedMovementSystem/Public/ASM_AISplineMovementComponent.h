#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AI/Navigation/NavigationTypes.h"
#include "Engine/EngineTypes.h"
#include "OnMovementFailedDelegateDelegate.h"
#include "OnMovementSucceededDelegateDelegate.h"
#include "SplineMovableActorData.h"
#include "Templates/SubclassOf.h"
#include "ASM_AISplineMovementComponent.generated.h"

class AAIController;
class AActor;
class ANavigationData;
class APawn;
class UASM_SplineBasedMoveTo;
class UMaterialInterface;
class UNavigationPath;
class UNavigationQueryFilter;
class UNavigationSystemV1;
class UPawnMovementComponent;
class USplineComponent;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class AISPLINEBASEDMOVEMENTSYSTEM_API UASM_AISplineMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMovableActorData SplineMovableActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UASM_SplineBasedMoveTo* SplineBasedMoveToNodePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* OwningPawnPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIControllerPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* MovementComponentPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavigationSystemV1* NavSystemPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNavigationPath* NavPathPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavigationData* NavDataPtr;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaDistanceToMove;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnTarget_DistanceFromFirstTarget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTetherDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTetherDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObservedTargetTickInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePathfindingWhileMoving;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebug;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SplineDebugColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugMeshScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DebugMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DebugMeshMaterial;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementSucceededDelegate OnMovementSucceededDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementFailedDelegate OnMovementFailedDelegate;
    
    UASM_AISplineMovementComponent();
    UFUNCTION(BlueprintCallable)
    void UpdatePath();
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SplineBasedMoveTo(const FVector Destination, AActor* TargetActor, const float AcceptanceRadius, TSubclassOf<UNavigationQueryFilter> FilterClass, const bool bAllowStrafe, const bool bStopOnOverlap, const bool bAllowPartialPath, const bool bAllowSplineRepath, const bool bTrackMovingGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMove() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPathUpdated(UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPathValide() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNavPathFound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTurnDelta();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FindNavPath(bool _Updating);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BuildSplinePath(const TArray<FVector>& _PathPoints);  
};