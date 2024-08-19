#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomGraph_Cover.h"
#include "RoomGraph_Crossable.generated.h"

UCLASS(Blueprintable)
class ASF_API URoomGraph_Crossable : public URoomGraph_Cover {
    GENERATED_BODY()
public:
    URoomGraph_Crossable();

    UFUNCTION(BlueprintCallable)
    bool FindCrossableExitPoint(FVector EntryPoint, FVector Direction, FVector& ExitPoint);
    
};

