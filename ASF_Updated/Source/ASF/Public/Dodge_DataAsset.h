#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Dodge_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UDodge_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountOfExtraArmor;
    
    UDodge_DataAsset();

};

