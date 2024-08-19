#pragma once
#include "CoreMinimal.h"
#include "Event_WaveSpawnerComponentDelegate.generated.h"

class UWaveSpawnerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_WaveSpawnerComponent, UWaveSpawnerComponent*, WaveSpawnerComponent);

