#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyTracking_DataAsset.generated.h"

class UEnnemyTrackingComponent;

UCLASS(Blueprintable)
class ASF_API UEnemyTracking_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnnemyTrackingComponent> _TrackingComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTrackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackMinimumRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackMaximumRadius;
    
    UEnemyTracking_DataAsset();

};

