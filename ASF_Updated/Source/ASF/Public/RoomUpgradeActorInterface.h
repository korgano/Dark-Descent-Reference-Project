#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RoomUpgradeActorInterface.generated.h"

UINTERFACE(Blueprintable)
class ASF_API URoomUpgradeActorInterface : public UInterface {
    GENERATED_BODY()
};

class ASF_API IRoomUpgradeActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTagContainer GetUpgrades() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTag GetRoomTag() const;
    
};

