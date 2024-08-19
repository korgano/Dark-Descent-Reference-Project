#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StatEventsSubsystem.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API UStatEventsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UStatEventsSubsystem();

    UFUNCTION(BlueprintCallable)
    void MarineLevelUpEvent(AHumanoid* Marine, int32 NbLevelUp);
    
};

