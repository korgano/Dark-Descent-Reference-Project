#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "Event_CivilSpawnwerComp_CharacterIDNameDelegate.generated.h"

class UCivilSpawner_ActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_CivilSpawnwerComp_CharacterIDName, UCivilSpawner_ActorComponent*, comp, FCharacterIDName, _CharacterIDName);

