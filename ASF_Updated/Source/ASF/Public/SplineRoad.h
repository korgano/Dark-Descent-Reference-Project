#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SplineRoad_Location.h"
#include "SplineRoad.generated.h"

class ASplineRoad;
class UArrowComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASF_API ASplineRoad : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowNavigational;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StartFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EndFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> RoadCollisionsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASplineRoad*> NextRoads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASplineRoad*> PreviousRoads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deceleration;
    
    ASplineRoad(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateShape();
    
    UFUNCTION(BlueprintCallable)
    void TryAttach();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPreviousRoad(ASplineRoad* R);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNextRoad(ASplineRoad* R);
    
    UFUNCTION(BlueprintCallable)
    void OnPreviousRoadRemoved(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnNextRoadRemoved(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetWorldRotationForSplineLocation(FSplineRoad_Location Loc);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetWorldLocationForSplineLocation(FSplineRoad_Location Loc);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ASplineRoad*> FindPathTo(ASplineRoad* _From, ASplineRoad* _Dest);
    
    UFUNCTION(BlueprintCallable)
    void Detach();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRoad();
    
};

