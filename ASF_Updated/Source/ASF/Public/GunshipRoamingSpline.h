#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GunshipRoamingSpline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ASF_API AGunshipRoamingSpline : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EvadeApproachLocationDelta;
    
public:
    AGunshipRoamingSpline(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEvadeApproachLocationDelta() const;
    
};

