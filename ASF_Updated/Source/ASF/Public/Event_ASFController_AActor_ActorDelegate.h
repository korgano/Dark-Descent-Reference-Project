#pragma once
#include "CoreMinimal.h"
#include "Event_ASFController_AActor_ActorDelegate.generated.h"

class AASFPlayerController;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFController_AActor_Actor, AASFPlayerController*, Controller, AActor*, _OldSelection, AActor*, _NewSelection);

