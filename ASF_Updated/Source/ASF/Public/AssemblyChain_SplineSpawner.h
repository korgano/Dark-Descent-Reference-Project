#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineInsertionTreeData.h"
#include "AssemblyChain_SplineSpawner.generated.h"

class AAssemblyChain_Movable;
class AAssemblyChain_Robot;
class USplineComponent;

UCLASS(Blueprintable)
class ASF_API AAssemblyChain_SplineSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAssemblyChain_Robot*> SplineRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAssemblyChain_Movable*> SplineMovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAssemblyChain_Movable*> MovableToDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplineInsertionTreeData> SplineInsertionTreeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TreeOriginIndex;
    
public:
    AAssemblyChain_SplineSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveMovableObject(AAssemblyChain_Movable* _AssemblyChain_Movable, bool _DuringUpdate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateInsertionTree();
    
public:
    UFUNCTION(BlueprintCallable)
    void FindRobotSplineLocation(USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable)
    AAssemblyChain_Robot* FindOverlapingRobotForAlpha(float SplineAlpha);
    
    UFUNCTION(BlueprintCallable)
    void FindAssemblyChainRobot(USplineComponent* Spline, const TArray<AAssemblyChain_Robot*>& AvaillableRobot);
    
};

