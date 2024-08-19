#pragma once
#include "CoreMinimal.h"
#include "Event_CoverDelegate.generated.h"

class AASFCharacter;
class UCoverComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Cover, UCoverComponent*, CoverComponent, AASFCharacter*, Character);

