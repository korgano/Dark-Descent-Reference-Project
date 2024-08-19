#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Kleptomaniac_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UKleptomaniac_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StolenMaterials;
    
    UKleptomaniac_DataAsset();

};

