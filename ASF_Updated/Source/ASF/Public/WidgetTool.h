#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "EnumControllerType.h"
#include "Templates/SubclassOf.h"
#include "WidgetButtonWidgetHighlight.h"
#include "WidgetTool.generated.h"

class UHighlightWidget;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class ASF_API UWidgetTool : public UObject {
    GENERATED_BODY()
public:
    UWidgetTool();

    UFUNCTION(BlueprintCallable)
    static int32 WidgetButtonWidgetHighlightArrayFind(TArray<FWidgetButtonWidgetHighlight> _Array, FWidgetButtonWidgetHighlight _Struct);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UWidget*> SortWidgetBy_XLocation(UWidget* Parent, TArray<UWidget*> _Widgets);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveHighlightToWidget(UWidget* WidgetParent, UWidget* WidgetToUnHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Key_GetDisplayShortName(const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetWidgetCenterLocation(UWidget* Parent, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetUMG_DPI_Scale(float& Inverse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static EnumControllerType GetPlayerControllerType(UObject* _WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FKey GetKeyForInputAxis(UObject* _WorldContext, FName _AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FKey GetKeyForInputAction(UObject* _WorldContext, FName _ActionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    static FString GetInputRichTextKeyByPlayerAction(UObject* _WorldContext, FName _PlayerAction, const EnumControllerType& ControllerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FString GetInputRichTextKeyByKey(UObject* _WorldContext, const FKey& _Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FString GetInputRichTextKeyByAxis(UObject* _WorldContext, FName _AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FString GetInputRichTextKeyByAction(UObject* _WorldContext, FName _ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static TSoftObjectPtr<UTexture2D> GetInputIconByRowName(UObject* _WorldContext, FName _RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static TSoftObjectPtr<UTexture2D> GetInputIconByKey(UObject* _WorldContext, const FKey& _Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static TSoftObjectPtr<UTexture2D> GetInputIconByAxis(UObject* _WorldContext, FName _AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static TSoftObjectPtr<UTexture2D> GetInputIconByAction(UObject* _WorldContext, FName _ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FString GetFormattedInputRichTextKeyByAxis(UObject* _WorldContext, FName _AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FString GetFormattedInputRichTextKeyByAction(UObject* _WorldContext, FName _ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FString GetFormattedInputRichTextKey(UObject* _WorldContext, const FKey& _Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UWidget*> GetChildrenWidget(UWidget* Parent, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertIntToLetters(int32 _i);
    
    UFUNCTION(BlueprintCallable)
    static UHighlightWidget* AddHighlightToWidget(UWidget* Child, TSubclassOf<UHighlightWidget> WidgetClass);
    
};

