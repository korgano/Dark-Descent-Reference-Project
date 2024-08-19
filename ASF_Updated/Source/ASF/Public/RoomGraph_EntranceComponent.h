#pragma once
#include "CoreMinimal.h"
#include "RoomGraphComponent.h"
#include "RoomGraph_EntranceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URoomGraph_EntranceComponent : public URoomGraphComponent {
    GENERATED_BODY()
public:
    URoomGraph_EntranceComponent(const FObjectInitializer& ObjectInitializer);

};

