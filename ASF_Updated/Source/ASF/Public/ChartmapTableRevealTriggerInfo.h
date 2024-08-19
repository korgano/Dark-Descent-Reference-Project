#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "ChartmapTableRevealTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UChartmapTableRevealTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevel;
    
    UChartmapTableRevealTriggerInfo();

};

