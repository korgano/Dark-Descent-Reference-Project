#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "Components/SplineComponent.h"
#include "ASFSplineComponent.generated.h"

class UActorComponent;
class USplineMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SplineName;
    
    UASFSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void removeSplineMeshComponentOnOwner(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void GetSplinePointsLocation(TArray<FVector>& _PointLocations, TEnumAsByte<ESplineCoordinateSpace::Type> _CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void GetSplineBounds(FVector& _Origin, FVector& _BoxExtend, TArray<FVector>& _PointLocations, TEnumAsByte<ESplineCoordinateSpace::Type> _CoordinateSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterPostEditChangeProperty();
    
    UFUNCTION(BlueprintCallable)
    USplineMeshComponent* addSplineMeshComponentOnOwner();
    
};

