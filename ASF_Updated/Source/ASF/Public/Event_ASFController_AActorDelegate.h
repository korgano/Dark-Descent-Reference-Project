#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_AActorDelegate.generated.h"

class AASFPlayerController;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFController_AActor, AASFPlayerController*, Controller, AActor*, Selectable);

