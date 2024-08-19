#pragma once
#include "CoreMinimal.h"
#include "GuardPathReferenceDelegateDelegate.generated.h"

class AAIGuardPath;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuardPathReferenceDelegate, AAIGuardPath*, GuardPath);

