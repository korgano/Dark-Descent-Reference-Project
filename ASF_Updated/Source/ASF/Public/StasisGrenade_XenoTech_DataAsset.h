#pragma once
#include "CoreMinimal.h"
#include "XenoTech_DataAsset.h"
#include "StasisGrenade_XenoTech_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UStasisGrenade_XenoTech_DataAsset : public UXenoTech_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    UStasisGrenade_XenoTech_DataAsset();

};

