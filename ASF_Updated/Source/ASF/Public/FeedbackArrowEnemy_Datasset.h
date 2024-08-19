#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FeedbackArrowEnemy_Datasset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASF_API UFeedbackArrowEnemy_Datasset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleForCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityDeacreaseByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForOpacityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleByActorInCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayNbActorMaxActorByCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UObject>, TSoftObjectPtr<UTexture2D>> TextureForEnemyClass;
    
    UFeedbackArrowEnemy_Datasset();

};

