#pragma once
#include "CoreMinimal.h"
#include "Event_Extractiontransport_HumanoidDelegate.generated.h"

class AExtractionTransport;
class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Extractiontransport_Humanoid, AExtractionTransport*, ExtractionTransport, AHumanoid*, Humanoid);

