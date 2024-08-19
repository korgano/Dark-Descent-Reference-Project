#pragma once
#include "CoreMinimal.h"
#include "XenoTech_DataAsset.h"
#include "HiveTranq_XenoTech_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UHiveTranq_XenoTech_DataAsset : public UXenoTech_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToReachNextAggressivenessLevelIncrease;
    
    UHiveTranq_XenoTech_DataAsset();

};

