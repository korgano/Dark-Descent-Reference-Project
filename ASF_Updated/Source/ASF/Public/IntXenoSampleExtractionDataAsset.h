#pragma once
#include "CoreMinimal.h"
#include "InteractionPrimaryDataAsset.h"
#include "IntXenoSampleExtractionDataAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API UIntXenoSampleExtractionDataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, int32> XenoExtractionSampleQuatityForActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, int32> XenoExtractionSampleChanceForActor;
    
    UIntXenoSampleExtractionDataAsset();

};

