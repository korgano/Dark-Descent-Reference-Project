#pragma once
#include "CoreMinimal.h"
#include "HumanoidActionManager.h"
#include "DroneActionManager.generated.h"

UCLASS(Blueprintable)
class ASF_API UDroneActionManager : public UHumanoidActionManager {
    GENERATED_BODY()
public:
    UDroneActionManager();

};

