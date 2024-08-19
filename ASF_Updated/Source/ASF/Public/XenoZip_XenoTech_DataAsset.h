#pragma once
#include "CoreMinimal.h"
#include "XenoTech_DataAsset.h"
#include "XenoZip_XenoTech_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UXenoZip_XenoTech_DataAsset : public UXenoTech_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPointBonus;
    
    UXenoZip_XenoTech_DataAsset();

};

