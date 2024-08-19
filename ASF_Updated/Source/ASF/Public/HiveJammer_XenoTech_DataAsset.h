#pragma once
#include "CoreMinimal.h"
#include "XenoTech_DataAsset.h"
#include "HiveJammer_XenoTech_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UHiveJammer_XenoTech_DataAsset : public UXenoTech_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HuntPhaseDurationReduction;
    
    UHiveJammer_XenoTech_DataAsset();

};

