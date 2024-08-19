#pragma once
#include "CoreMinimal.h"
#include "MassiveOnslaughtAlienBindDelegateDelegate.generated.h"

class AAlien;
class UMassiveOnslaughtEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMassiveOnslaughtAlienBindDelegate, UMassiveOnslaughtEffect*, MOEffect, AAlien*, Alien);

