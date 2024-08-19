#pragma once
#include "CoreMinimal.h"
#include "RoomGraphComponent.h"
#include "RoomGraph_BlockerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URoomGraph_BlockerComponent : public URoomGraphComponent {
    GENERATED_BODY()
public:
    URoomGraph_BlockerComponent(const FObjectInitializer& ObjectInitializer);

};

