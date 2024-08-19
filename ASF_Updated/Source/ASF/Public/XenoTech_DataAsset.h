#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarineAttributeDataAssets.h"
#include "XenoTech_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UXenoTech_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ResourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassive;
    
    UXenoTech_DataAsset();

};

