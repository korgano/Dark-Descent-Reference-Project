#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Dilettante_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UDilettante_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BraveryMultiplierDuringFirstObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BraveryMultiplierAfterFirstObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfNeededObjectivesBeforeSwitchingMultipliers;
    
    UDilettante_DataAsset();

};

