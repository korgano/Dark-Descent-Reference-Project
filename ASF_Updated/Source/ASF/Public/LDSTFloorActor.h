#pragma once
#include "CoreMinimal.h"
#include "LDSTActor.h"
#include "LDSTFloorActor.generated.h"

UCLASS(Blueprintable)
class ASF_API ALDSTFloorActor : public ALDSTActor {
    GENERATED_BODY()
public:
    ALDSTFloorActor(const FObjectInitializer& ObjectInitializer);

};

