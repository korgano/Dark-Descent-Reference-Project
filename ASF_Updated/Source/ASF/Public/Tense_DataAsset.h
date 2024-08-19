#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Tense_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UTense_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NbBulletLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChancePercentageBulletLostByBurst;
    
    UTense_DataAsset();

};

