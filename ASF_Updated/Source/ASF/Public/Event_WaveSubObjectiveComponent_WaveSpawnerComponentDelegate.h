#pragma once
#include "CoreMinimal.h"
#include "Event_WaveSubObjectiveComponent_WaveSpawnerComponentDelegate.generated.h"

class UWaveSpawnerComponent;
class UWaveSubObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_WaveSubObjectiveComponent_WaveSpawnerComponent, UWaveSubObjectiveComponent*, WaveSubObjectiveComp, UWaveSpawnerComponent*, WaveSpawnerComponent);

