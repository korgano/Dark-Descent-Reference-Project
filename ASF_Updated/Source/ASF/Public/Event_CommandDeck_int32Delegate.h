#pragma once
#include "CoreMinimal.h"
#include "Event_CommandDeck_int32Delegate.generated.h"

class ACommandDeck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_CommandDeck_int32, ACommandDeck*, CommandDeck, int32, I);

