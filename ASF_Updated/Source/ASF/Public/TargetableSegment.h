#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FOVSegmentVision.h"
#include "TargetableObjectData.h"
#include "TargetableSegment.generated.h"

UCLASS(Blueprintable)
class ASF_API UTargetableSegment : public UTargetableObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOVSegmentVision Segment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBtwPoints;
    
    UTargetableSegment();

    UFUNCTION(BlueprintCallable)
    TArray<FVector> GeneratePointAllongNormal(FVector Origine, FVector Normal, float Z);
    
};

