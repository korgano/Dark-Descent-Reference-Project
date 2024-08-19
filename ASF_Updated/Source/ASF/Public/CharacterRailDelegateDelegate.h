#pragma once
#include "CoreMinimal.h"
#include "RailDrivenCharacterData.h"
#include "RailPointData.h"
#include "CharacterRailDelegateDelegate.generated.h"

class UCharacterRailSplineComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FCharacterRailDelegate, UCharacterRailSplineComponent*, RailSplineComponent, const FRailDrivenCharacterData&, CharacterData, const FRailPointData&, CurrentPointData, const FRailPointData&, NextPointData);

