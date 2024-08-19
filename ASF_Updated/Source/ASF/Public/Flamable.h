#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Flamable.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFlamable : public UInterface {
    GENERATED_BODY()
};

class IFlamable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSize();
    
};

