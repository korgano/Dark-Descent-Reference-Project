#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Event_AAssemblyChain_MovableDelegate.h"
#include "LDSTActor.h"
#include "AssemblyChain_Robot.generated.h"

class AAssemblyChain_Movable;

UCLASS(Blueprintable)
class ASF_API AAssemblyChain_Robot : public ALDSTActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AAssemblyChain_Movable BeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AAssemblyChain_Movable EndOverlap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RobotRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplinePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAlphaPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAlphaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAssemblyChain_Movable*> OverlappingObject;
    
public:
    AAssemblyChain_Robot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateOverlapEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePosition(const FVector& _SplinePosition, float _SplineAlphaPosition, float _SplineAlphaRange);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOverlappingObject(AAssemblyChain_Movable* _OverlappingObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlphaOverlapping(float _Alpha) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineAlphaRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineAlphaPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRobotRange() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOverlappingObject(AAssemblyChain_Movable* _OverlappingObject);
    
};

