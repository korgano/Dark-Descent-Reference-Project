#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "SentryGunOtimization_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USentryGunOtimization_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbResourceNeeded;
    
    USentryGunOtimization_DataAsset();

};
