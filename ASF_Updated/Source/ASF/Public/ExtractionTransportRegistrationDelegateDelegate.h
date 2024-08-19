#pragma once
#include "CoreMinimal.h"
#include "ExtractionTransportRegistrationDelegateDelegate.generated.h"

class AASFGameState_TacticalMode;
class AExtractionTransport;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FExtractionTransportRegistrationDelegate, AASFGameState_TacticalMode*, GameState, AExtractionTransport*, ExtractionTransport);

