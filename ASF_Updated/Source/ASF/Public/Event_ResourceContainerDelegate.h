#pragma once
#include "CoreMinimal.h"
#include "Event_ResourceContainerDelegate.generated.h"

class UResourceContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ResourceContainer, UResourceContainer*, Resource);

