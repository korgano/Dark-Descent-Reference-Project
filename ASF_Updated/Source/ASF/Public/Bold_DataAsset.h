#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Bold_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UBold_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountOfExtraBravery;
    
    UBold_DataAsset();

};

