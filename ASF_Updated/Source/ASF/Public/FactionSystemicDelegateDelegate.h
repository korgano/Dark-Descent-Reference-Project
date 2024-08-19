#pragma once
#include "CoreMinimal.h"
#include "FactionSystemicDelegateDelegate.generated.h"

class UFactionSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFactionSystemicDelegate, UFactionSystemic*, FactionSystemic);

