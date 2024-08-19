#pragma once
#include "CoreMinimal.h"
#include "Room.h"
#include "CommandDeck.generated.h"

UCLASS(Blueprintable)
class ASF_API ACommandDeck : public ARoom {
    GENERATED_BODY()
public:
    ACommandDeck(const FObjectInitializer& ObjectInitializer);

};

