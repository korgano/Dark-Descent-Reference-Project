#pragma once
#include "CoreMinimal.h"
#include "GuardPathAvailabilityDelegateDelegate.generated.h"

class AAIGuardPath;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGuardPathAvailabilityDelegate, AAIGuardPath*, GuardPath, bool, IsAvailable);

