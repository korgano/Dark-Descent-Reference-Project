#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WelcomeMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UWelcomeMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UWelcomeMenuWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
};

