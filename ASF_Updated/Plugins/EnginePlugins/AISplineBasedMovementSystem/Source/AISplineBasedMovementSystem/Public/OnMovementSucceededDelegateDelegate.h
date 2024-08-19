#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "OnMovementSucceededDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementSucceededDelegate, TEnumAsByte<EPathFollowingResult::Type>, MovementResult);

