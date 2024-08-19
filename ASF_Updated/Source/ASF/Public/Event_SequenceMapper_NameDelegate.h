#pragma once
#include "CoreMinimal.h"
#include "Event_SequenceMapper_NameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SequenceMapper_Name, FName, SequenceName);

