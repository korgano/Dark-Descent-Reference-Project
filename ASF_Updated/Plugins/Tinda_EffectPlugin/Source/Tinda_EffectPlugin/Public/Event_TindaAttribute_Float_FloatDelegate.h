#pragma once
#include "CoreMinimal.h"
#include "Event_TindaAttribute_Float_FloatDelegate.generated.h"

class UTinda_Attribute;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_TindaAttribute_Float_Float, UTinda_Attribute*, Attribute, float, OldValue, float, NewValue);

