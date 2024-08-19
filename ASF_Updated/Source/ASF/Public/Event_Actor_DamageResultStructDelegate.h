#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "Event_Actor_DamageResultStructDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Actor_DamageResultStruct, AActor*, ActorWounded, const FDamageResultStruct&, Damage);

