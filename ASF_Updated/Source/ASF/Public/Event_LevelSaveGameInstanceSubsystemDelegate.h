#pragma once
#include "CoreMinimal.h"
#include "Event_LevelSaveGameInstanceSubsystemDelegate.generated.h"

class ULevelSaveGameInstanceSubsystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_LevelSaveGameInstanceSubsystem, ULevelSaveGameInstanceSubsystem*, LevelSaveGameInstanceSubsystem);

