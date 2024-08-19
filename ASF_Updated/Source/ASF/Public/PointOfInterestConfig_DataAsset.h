#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PointOfInterestConfig_DataAsset.generated.h"

class UAIPointOfInterestVolatile;
class UPointOfInterest_DataAsset;

UCLASS(Blueprintable)
class ASF_API UPointOfInterestConfig_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIPointOfInterestVolatile> PointOfInterestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPointOfInterest_DataAsset*> PointOfInterests;
    
    UPointOfInterestConfig_DataAsset();

};

