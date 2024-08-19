#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TMMapPrimaryWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UTMMapPrimaryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTMMapPrimaryWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
};

