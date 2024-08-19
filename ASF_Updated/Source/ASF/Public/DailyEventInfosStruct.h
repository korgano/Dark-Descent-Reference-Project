#pragma once
#include "CoreMinimal.h"
#include "DailyEventEffectStruct.h"
#include "DailyEventInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FDailyEventInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString daily_event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDailyEventEffectStruct> chosen_effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDailyEventEffectStruct> not_chosen_effects;
    
    FDailyEventInfosStruct();
};

