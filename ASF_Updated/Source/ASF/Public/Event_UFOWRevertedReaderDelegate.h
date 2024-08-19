#pragma once
#include "CoreMinimal.h"
#include "Event_UFOWRevertedReaderDelegate.generated.h"

class UFOWRevertedReader;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UFOWRevertedReader, UFOWRevertedReader*, FOWReader);

