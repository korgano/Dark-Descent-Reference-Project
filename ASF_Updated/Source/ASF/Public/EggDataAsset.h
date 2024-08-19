#pragma once
#include "CoreMinimal.h"
#include "CharacterDataAsset.h"
#include "EggDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEggDataAsset : public UCharacterDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDelayOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDelayOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatLevelDelayIncreaseOnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpeningDistanceThreshold;
    
    UEggDataAsset();

};

