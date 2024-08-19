#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnMovementSucceededDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ASM_SplineBasedMoveTo.generated.h"

class AActor;
class UASM_AISplineMovementComponent;
class UASM_SplineBasedMoveTo;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable)
class AISPLINEBASEDMOVEMENTSYSTEM_API UASM_SplineBasedMoveTo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UASM_AISplineMovementComponent* AISplineMovementComponentPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActorPtr;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementSucceededDelegate onSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementSucceededDelegate OnFail;
    
    UASM_SplineBasedMoveTo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UASM_SplineBasedMoveTo* SplineBasedMoveTo(UObject* WorldContextObject, UASM_AISplineMovementComponent* SplineMovementComponent, const FVector Destination, AActor* TargetActor, const float AcceptanceRadius, TSubclassOf<UNavigationQueryFilter> FilterClass, const bool bAllowStrafe, const bool bStopOnOverlap, const bool bAllowPartialPath, const bool bAllowSplineRepath, const bool bTrackMovingGoal);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovementSucceeded(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementFailed(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};

