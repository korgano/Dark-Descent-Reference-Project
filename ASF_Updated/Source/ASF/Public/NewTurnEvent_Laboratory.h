#pragma once
#include "CoreMinimal.h"
#include "NewTurnEvent_Laboratory.generated.h"

class UBM_ResearchProject_DataAsset;

USTRUCT(BlueprintType)
struct FNewTurnEvent_Laboratory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBM_ResearchProject_DataAsset* Project;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingTurns;
    
    ASF_API FNewTurnEvent_Laboratory();
};

