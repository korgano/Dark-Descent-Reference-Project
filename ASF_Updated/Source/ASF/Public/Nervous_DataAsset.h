#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Nervous_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UNervous_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfStressPillsToConsume;
    
    UNervous_DataAsset();

};

