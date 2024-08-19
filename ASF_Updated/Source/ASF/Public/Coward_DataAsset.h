#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Coward_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCoward_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BraveryMalus;
    
    UCoward_DataAsset();

};

