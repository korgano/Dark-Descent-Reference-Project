#pragma once
#include "CoreMinimal.h"
#include "NewTurnEvent_Asylum.generated.h"

class UTrauma_DataAsset;

USTRUCT(BlueprintType)
struct FNewTurnEvent_Asylum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrauma_DataAsset* Trauma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingTurns;
    
    ASF_API FNewTurnEvent_Asylum();
};

