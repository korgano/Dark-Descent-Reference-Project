#pragma once
#include "CoreMinimal.h"
#include "StasisPointRegistrationDelegateDelegate.generated.h"

class AStasisPoint;
class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStasisPointRegistrationDelegate, UAlienSystemic*, AlienSystemic, AStasisPoint*, StasisPoint);

