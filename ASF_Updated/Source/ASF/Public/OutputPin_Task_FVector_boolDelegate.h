#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutputPin_Task_FVector_boolDelegate.generated.h"

class UTask;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOutputPin_Task_FVector_bool, UTask*, Task, FVector, Location, bool, bIsDragAndDropActivated);

