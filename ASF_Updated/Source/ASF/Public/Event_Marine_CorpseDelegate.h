#pragma once
#include "CoreMinimal.h"
#include "Event_Marine_CorpseDelegate.generated.h"

class AHumanoidMarine;
class AStorage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Marine_Corpse, AHumanoidMarine*, Marine, AStorage*, Corpse);

