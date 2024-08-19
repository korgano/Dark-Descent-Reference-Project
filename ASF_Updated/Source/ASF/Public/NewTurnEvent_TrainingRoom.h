#pragma once
#include "CoreMinimal.h"
#include "NewTurnEvent_TrainingRoom.generated.h"

USTRUCT(BlueprintType)
struct FNewTurnEvent_TrainingRoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GainedXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIntensiveTraining;
    
    ASF_API FNewTurnEvent_TrainingRoom();
};

