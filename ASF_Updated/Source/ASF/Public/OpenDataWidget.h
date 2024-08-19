#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OpenDataWidget.generated.h"

class UMapFeedbackDataProperties;

UINTERFACE(Blueprintable, MinimalAPI)
class UOpenDataWidget : public UInterface {
    GENERATED_BODY()
};

class IOpenDataWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties() const;
    
};

