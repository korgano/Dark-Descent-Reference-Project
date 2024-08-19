#pragma once
#include "CoreMinimal.h"
#include "MotionTracker_DataAsset.h"
#include "MinimapMotionTracker_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UMinimapMotionTracker_DataAsset : public UMotionTracker_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapDisplayedRadius;
    
    UMinimapMotionTracker_DataAsset();

};

