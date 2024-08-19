#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Weak_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UWeak_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryingCapacityMalus;
    
    UWeak_DataAsset();

};

