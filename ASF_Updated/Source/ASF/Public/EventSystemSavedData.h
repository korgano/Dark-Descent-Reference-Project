#pragma once
#include "CoreMinimal.h"
#include "SystemicSavedData.h"
#include "EventSystemSavedData.generated.h"

USTRUCT(BlueprintType)
struct FEventSystemSavedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatLevelIncrementRemainingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSystemicSavedData> SystemicSavedDatas;
    
    ASF_API FEventSystemSavedData();
};

