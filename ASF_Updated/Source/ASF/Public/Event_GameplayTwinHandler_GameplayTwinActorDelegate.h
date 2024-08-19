#pragma once
#include "CoreMinimal.h"
#include "Event_GameplayTwinHandler_GameplayTwinActorDelegate.generated.h"

class AGameplayTwinActor;
class AGameplayTwinHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_GameplayTwinHandler_GameplayTwinActor, AGameplayTwinHandler*, TwinHandler, AGameplayTwinActor*, TwinActor);

