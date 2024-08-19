#pragma once
#include "CoreMinimal.h"
#include "Event_GameplayTwinActorDelegate.generated.h"

class AGameplayTwinActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_GameplayTwinActor, AGameplayTwinActor*, TwinActor);

