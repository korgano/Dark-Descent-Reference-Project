#pragma once
#include "CoreMinimal.h"
#include "OutputPin_TaskDelegate.generated.h"

class UTask;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOutputPin_Task, UTask*, Task);

