#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_StringDelegate.generated.h"

class AASFPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFController_String, AASFPlayerController*, Controller, const FString&, _string);

