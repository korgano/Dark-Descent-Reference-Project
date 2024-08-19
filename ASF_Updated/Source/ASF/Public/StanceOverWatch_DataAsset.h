#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StanceOverWatch_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UStanceOverWatch_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecisionLossByDistance_Coef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadShot_Chance;
    
    UStanceOverWatch_DataAsset();

};

