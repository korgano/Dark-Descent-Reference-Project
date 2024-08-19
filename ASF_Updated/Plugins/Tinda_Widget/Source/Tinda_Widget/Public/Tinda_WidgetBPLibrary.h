#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "Tinda_WidgetBPLibrary.generated.h"

class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UTinda_WidgetBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTinda_WidgetBPLibrary();

    UFUNCTION(BlueprintCallable)
    static UUserWidget* WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static float Tinda_WidgetSampleFunction(float Param);
    
};

