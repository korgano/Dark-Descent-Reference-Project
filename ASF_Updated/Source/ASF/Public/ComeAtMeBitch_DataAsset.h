#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "ComeAtMeBitch_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UComeAtMeBitch_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TauntRadius;
    
    UComeAtMeBitch_DataAsset();

};

