#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "TeamSpirit_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UTeamSpirit_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CommandPointRegenerationMultiplier;
    
    UTeamSpirit_DataAsset();

};

