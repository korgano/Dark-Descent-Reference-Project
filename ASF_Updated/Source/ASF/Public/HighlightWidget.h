#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HighlightWidget.generated.h"

class UNamedSlot;
class UPanelWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UHighlightWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WidgetToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* OriginalParent;
    
    UHighlightWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Init(UWidget* _WidgetToHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNamedSlot* GetNamedSlot();
    
};

