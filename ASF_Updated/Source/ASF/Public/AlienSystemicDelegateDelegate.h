#pragma once
#include "CoreMinimal.h"
#include "AlienSystemicDelegateDelegate.generated.h"

class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAlienSystemicDelegate, UAlienSystemic*, AlienSystemic);

