#pragma once
#include "CoreMinimal.h"
#include "EAmbushState.h"
#include "AmbushStateChangeDelegateDelegate.generated.h"

class AAmbushSpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAmbushStateChangeDelegate, AAmbushSpawnPoint*, AmbushPoint, EAmbushState, OldState, EAmbushState, NewState);

