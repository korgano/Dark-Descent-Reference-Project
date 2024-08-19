#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "Event_Actor_DamageResultDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Actor_DamageResult, AActor*, ActorKilled, const FDamageResultStruct&, _DamageResult);

