#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Event_TMMainWidget_FGeometry_floatDelegate.generated.h"

class UTMMainWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_TMMainWidget_FGeometry_float, UTMMainWidget*, MainWidget, const FGeometry&, MyGeometry, float, F);

