#pragma once
#include "CoreMinimal.h"
#include "OnDetectionUpdatedBPDelegate.generated.h"

class UPOIDefaultContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDetectionUpdatedBP, UPOIDefaultContainer*, PerceptionResult);

