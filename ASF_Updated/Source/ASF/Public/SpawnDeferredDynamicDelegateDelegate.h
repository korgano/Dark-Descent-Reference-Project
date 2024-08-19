#pragma once
#include "CoreMinimal.h"
#include "SpawnDeferredDynamicDelegateDelegate.generated.h"

class ASpawnPoint;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSpawnDeferredDynamicDelegate, ASpawnPoint*, SpawnPoint, UObject*, SpawnedObject);

