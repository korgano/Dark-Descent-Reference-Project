#pragma once
#include "CoreMinimal.h"
#include "Callback_Alien_UObjectDelegate.generated.h"

class AAlien;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCallback_Alien_UObject, AAlien*, Alien, UObject*, EvadePoint);

