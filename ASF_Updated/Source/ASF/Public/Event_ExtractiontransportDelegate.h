#pragma once
#include "CoreMinimal.h"
#include "Event_ExtractiontransportDelegate.generated.h"

class AExtractionTransport;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Extractiontransport, AExtractionTransport*, ExtractionTransport);

