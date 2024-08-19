#pragma once
#include "CoreMinimal.h"
#include "XenoTech_DataAsset.h"
#include "AdvXenoSampleExtractor_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UAdvXenoSampleExtractor_DataAsset : public UXenoTech_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropBonusRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GatheringBonusRate;
    
    UAdvXenoSampleExtractor_DataAsset();

};

