#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommandPoint_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCommandPoint_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialCommandPointCapacityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationToRefillCommandPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialCommandPointCapacityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialCommandPointCapacityMax_Bonus_ApcFeature;
    
    UCommandPoint_DataAsset();

};

