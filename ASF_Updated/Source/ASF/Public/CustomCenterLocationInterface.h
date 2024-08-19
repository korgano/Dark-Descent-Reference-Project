#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "CustomCenterLocationInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCustomCenterLocationInterface : public UInterface {
    GENERATED_BODY()
};

class ICustomCenterLocationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCustomCenterLocation() const;
    
};

