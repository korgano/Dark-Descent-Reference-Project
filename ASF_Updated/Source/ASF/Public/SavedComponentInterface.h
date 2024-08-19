#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESaveType.h"
#include "SavedComponentInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USavedComponentInterface : public UInterface {
    GENERATED_BODY()
};

class ISavedComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeSaving(ESaveType _SaveType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterSaving(ESaveType _SaveType);
    
};

