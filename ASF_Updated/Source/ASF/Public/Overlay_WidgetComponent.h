#pragma once
#include "CoreMinimal.h"
#include "ASF_WidgetComponent.h"
#include "EConcurentWidget.h"
#include "Event_Overlay_WidgetDelegate.h"
#include "Overlay_WidgetComponent.generated.h"

class AASFPlayerControllerTactical;
class AActor;
class UWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UOverlay_WidgetComponent : public UASF_WidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WidgetHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Overlay_Widget OnWidgetHoverChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayInteractionOnOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UOverlay_WidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnDisplayInteractions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryClose(AActor* _NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetHover(UWidget* _Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UWidget*> GetInteractionWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UWidget*> GetDirecivesWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayInteractions();
    
    UFUNCTION(BlueprintCallable)
    void ConcurentWidgetChanged(AASFPlayerControllerTactical* _ASFPlayerController, EConcurentWidget OldWidget, EConcurentWidget NewWidget);
    
};

