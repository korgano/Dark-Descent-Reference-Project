#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MotionTracker_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UMotionTracker_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fDist_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fDist_Max;
    
    UMotionTracker_DataAsset();

};

