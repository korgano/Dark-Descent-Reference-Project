#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Callback_UMapFeedbackUserWidgetDelegate.h"
#include "MapFeedbackUserWidget.generated.h"

class UCanvasPanelSlot;
class UMapFeedbackComponent;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UMapFeedbackUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapFeedbackComponent* FeedbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CanvasPanelSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallback_UMapFeedbackUserWidget OnMapFeedbackDestroy;
    
    UMapFeedbackUserWidget();

    UFUNCTION(BlueprintCallable)
    void OnFeedbackComponentActivationChanged(UMapFeedbackComponent* InFeedbackComponent, bool IsActivated);
    
};

