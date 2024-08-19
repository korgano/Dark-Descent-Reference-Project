#pragma once
#include "CoreMinimal.h"
#include "CharacterRailDropDelegateDelegate.generated.h"

class AASFCharacter;
class UCharacterRailSplineComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCharacterRailDropDelegate, UCharacterRailSplineComponent*, RailSplineComponent, AASFCharacter*, Character);

