#pragma once
#include "CoreMinimal.h"
#include "TraumaApplied.generated.h"

class UTrauma_DataAsset;

USTRUCT(BlueprintType)
struct FTraumaApplied {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UTrauma_DataAsset* Trauma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TurnOfHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TraumaPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TraumaLevel;
    
    ASF_API FTraumaApplied();
};

