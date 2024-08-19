#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Event_Actor_NavArea_NavAreaDelegate.generated.h"

class AActor;
class UNavAreaBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Actor_NavArea_NavArea, AActor*, Owner, TSubclassOf<UNavAreaBase>, OldNavAreaClass, TSubclassOf<UNavAreaBase>, NewNavAreaClass);

