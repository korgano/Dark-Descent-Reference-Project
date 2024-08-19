#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "Tinda_WidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TINDA_WIDGET_API UTinda_WidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UTinda_WidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Undisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Display();
    
};

