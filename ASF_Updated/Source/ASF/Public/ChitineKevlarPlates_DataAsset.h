#pragma once
#include "CoreMinimal.h"
#include "XenoTech_DataAsset.h"
#include "ChitineKevlarPlates_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UChitineKevlarPlates_DataAsset : public UXenoTech_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorBonus;
    
    UChitineKevlarPlates_DataAsset();

};

