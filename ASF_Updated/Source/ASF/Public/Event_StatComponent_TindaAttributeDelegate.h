#pragma once
#include "CoreMinimal.h"
#include "Event_StatComponent_TindaAttributeDelegate.generated.h"

class UStatComponent;
class UTinda_Attribute;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_StatComponent_TindaAttribute, UStatComponent*, StatComponent, UTinda_Attribute*, Attribute);

