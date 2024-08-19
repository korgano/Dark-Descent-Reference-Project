#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Trait_85_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UTrait_85_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LostXP;
    
    UTrait_85_DataAsset();

};

