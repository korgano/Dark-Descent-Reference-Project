#pragma once
#include "CoreMinimal.h"
#include "APCRoadProgressForTrigger.h"
#include "TriggerInfo.h"
#include "APCRoadProgressTriggerInfo.generated.h"

class AASFGameState_TacticalMode;
class AExtractionTransport;

UCLASS(Blueprintable)
class ASF_API UAPCRoadProgressTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAPCRoadProgressForTrigger RoadProgress;
    
    UAPCRoadProgressTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void OnExtractionTransportRegistered(AASFGameState_TacticalMode* GameState, AExtractionTransport* ExtractionTransport);
    
};

