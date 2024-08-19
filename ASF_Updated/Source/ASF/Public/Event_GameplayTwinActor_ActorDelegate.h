#pragma once
#include "CoreMinimal.h"
#include "Event_GameplayTwinActor_ActorDelegate.generated.h"

class AActor;
class AGameplayTwinActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_GameplayTwinActor_Actor, AGameplayTwinActor*, TwinActor, AActor*, LinkedActor);

