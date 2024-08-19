#pragma once
#include "CoreMinimal.h"
#include "EStressStep.h"
#include "EnumSquadStatus.h"
#include "Trait_DataAsset.h"
#include "Gloomy_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UGloomy_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStressStep GloomyStressStepThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EnumSquadStatus> SquadStatus;
    
    UGloomy_DataAsset();

};

