#pragma once
#include "CoreMinimal.h"
#include "Event_Character_ItemDelegate.generated.h"

class AASFCharacter;
class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Character_Item, AASFCharacter*, Character, AItem*, Item);

