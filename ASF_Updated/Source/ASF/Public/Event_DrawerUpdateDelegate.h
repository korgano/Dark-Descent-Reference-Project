#pragma once
#include "CoreMinimal.h"
#include "Event_DrawerUpdateDelegate.generated.h"

class UFOWRevertedRenderTextureDrawer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_DrawerUpdate, UFOWRevertedRenderTextureDrawer*, Drawer);

