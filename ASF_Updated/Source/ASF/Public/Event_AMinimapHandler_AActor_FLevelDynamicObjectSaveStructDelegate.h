#pragma once
#include "CoreMinimal.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "Event_AMinimapHandler_AActor_FLevelDynamicObjectSaveStructDelegate.generated.h"

class AActor;
class AMinimapHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AMinimapHandler_AActor_FLevelDynamicObjectSaveStruct, AMinimapHandler*, Handler, AActor*, DynamicObject, FLevelDynamicObjectSaveStruct, DynamicObjectStruct);

