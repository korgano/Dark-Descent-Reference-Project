#pragma once
#include "CoreMinimal.h"
#include "Callback_AlienDelegate.generated.h"

class AAlien;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCallback_Alien, AAlien*, Alien);

