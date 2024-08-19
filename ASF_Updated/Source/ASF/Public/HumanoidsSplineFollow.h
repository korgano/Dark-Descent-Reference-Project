#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Event_HumanoidMovementCompletedDelegate.h"
#include "Templates/SubclassOf.h"
#include "HumanoidsSplineFollow.generated.h"

class AHumanoidTactical;
class UNavigationQueryFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UHumanoidsSplineFollow : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_HumanoidMovementCompleted OnHumanoidMovementCompleted;
    
    UHumanoidsSplineFollow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProjectLastSplinePointToNavigation(AHumanoidTactical* _HumanoidTactical, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    void AddHumanoidToSpline(AHumanoidTactical* _Humanoid, bool _Forward, bool _Crouch);
    
};

