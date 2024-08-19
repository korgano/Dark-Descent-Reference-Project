#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HuntUpdateDelegatteDelegate.generated.h"

class UAlienSystemic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHuntUpdateDelegatte, UAlienSystemic*, AlienSystemic, FVector, Origin, int32, GraphID);

