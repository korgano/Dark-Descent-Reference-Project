#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameStateBase_AActorDelegate.generated.h"

class AASFGameStateBase;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameStateBase_AActor, AASFGameStateBase*, GameState, AActor*, Actor);

