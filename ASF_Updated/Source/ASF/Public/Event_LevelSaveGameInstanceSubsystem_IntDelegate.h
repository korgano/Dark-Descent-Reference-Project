#pragma once
#include "CoreMinimal.h"
#include "Event_LevelSaveGameInstanceSubsystem_IntDelegate.generated.h"

class ULevelSaveGameInstanceSubsystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_LevelSaveGameInstanceSubsystem_Int, ULevelSaveGameInstanceSubsystem*, LevelSaveGameInstanceSubsystem, const int32&, _Index);

