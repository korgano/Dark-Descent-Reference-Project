#pragma once
#include "CoreMinimal.h"
#include "Event_PowerLoaderActor_IntDelegate.generated.h"

class APowerLoaderActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_PowerLoaderActor_Int, APowerLoaderActor*, powerLoader, int32, stepDone);

