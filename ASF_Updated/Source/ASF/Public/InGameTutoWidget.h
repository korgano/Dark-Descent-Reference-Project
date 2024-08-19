#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Event_InGameTutoWidgetDelegate.h"
#include "InGameTutoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UInGameTutoWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InGameTutoWidget OnCloseTuto;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InGameTutoWidget OnPreCloseTuto;
    
    UInGameTutoWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UUserWidget* GetButtonClose() const;
    
};

