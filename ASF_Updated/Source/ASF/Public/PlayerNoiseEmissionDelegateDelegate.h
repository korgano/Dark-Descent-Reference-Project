#pragma once
#include "CoreMinimal.h"
#include "PlayerNoiseEmissionDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerNoiseEmissionDelegate, AActor*, NoiseInstigator);

