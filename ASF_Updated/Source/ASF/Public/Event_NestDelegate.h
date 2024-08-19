#pragma once
#include "CoreMinimal.h"
#include "Event_NestDelegate.generated.h"

class ANest;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Nest, ANest*, Nest);

