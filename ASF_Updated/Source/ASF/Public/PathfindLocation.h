#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "PathfindLocation.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPathfindLocation : public UInterface {
    GENERATED_BODY()
};

class IPathfindLocation : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPathfindLocation() const;
    
};

