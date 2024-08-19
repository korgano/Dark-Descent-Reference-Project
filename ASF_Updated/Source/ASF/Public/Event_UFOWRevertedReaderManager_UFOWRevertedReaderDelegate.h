#pragma once
#include "CoreMinimal.h"
#include "Event_UFOWRevertedReaderManager_UFOWRevertedReaderDelegate.generated.h"

class UFOWRevertedReader;
class UFOWRevertedReaderManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UFOWRevertedReaderManager_UFOWRevertedReader, UFOWRevertedReaderManager*, FOWReaderManager, UFOWRevertedReader*, FOWReader);

