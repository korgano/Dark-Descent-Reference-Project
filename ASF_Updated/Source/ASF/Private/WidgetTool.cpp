#include "WidgetTool.h"
#include "Templates/SubclassOf.h"

UWidgetTool::UWidgetTool() {
}

int32 UWidgetTool::WidgetButtonWidgetHighlightArrayFind(TArray<FWidgetButtonWidgetHighlight> _Array, FWidgetButtonWidgetHighlight _Struct) {
    return 0;
}

TArray<UWidget*> UWidgetTool::SortWidgetBy_XLocation(UWidget* Parent, TArray<UWidget*> _Widgets) {
    return TArray<UWidget*>();
}

void UWidgetTool::RemoveHighlightToWidget(UWidget* WidgetParent, UWidget* WidgetToUnHighlight) {
}

FText UWidgetTool::Key_GetDisplayShortName(const FKey& Key) {
    return FText::GetEmpty();
}

FVector2D UWidgetTool::GetWidgetCenterLocation(UWidget* Parent, UWidget* Widget) {
    return FVector2D{};
}

float UWidgetTool::GetUMG_DPI_Scale(float& Inverse) {
    return 0.0f;
}

EnumControllerType UWidgetTool::GetPlayerControllerType(UObject* _WorldContext) {
    return EnumControllerType::GAMEPAD;
}

FKey UWidgetTool::GetKeyForInputAxis(UObject* _WorldContext, FName _AxisName) {
    return FKey{};
}

FKey UWidgetTool::GetKeyForInputAction(UObject* _WorldContext, FName _ActionName) {
    return FKey{};
}

FString UWidgetTool::GetInputRichTextKeyByPlayerAction(UObject* _WorldContext, FName _PlayerAction, const EnumControllerType& ControllerType) {
    return TEXT("");
}

FString UWidgetTool::GetInputRichTextKeyByKey(UObject* _WorldContext, const FKey& _Key) {
    return TEXT("");
}

FString UWidgetTool::GetInputRichTextKeyByAxis(UObject* _WorldContext, FName _AxisName) {
    return TEXT("");
}

FString UWidgetTool::GetInputRichTextKeyByAction(UObject* _WorldContext, FName _ActionName) {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UWidgetTool::GetInputIconByRowName(UObject* _WorldContext, FName _RowName) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UWidgetTool::GetInputIconByKey(UObject* _WorldContext, const FKey& _Key) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UWidgetTool::GetInputIconByAxis(UObject* _WorldContext, FName _AxisName) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UWidgetTool::GetInputIconByAction(UObject* _WorldContext, FName _ActionName) {
    return NULL;
}

FString UWidgetTool::GetFormattedInputRichTextKeyByAxis(UObject* _WorldContext, FName _AxisName) {
    return TEXT("");
}

FString UWidgetTool::GetFormattedInputRichTextKeyByAction(UObject* _WorldContext, FName _ActionName) {
    return TEXT("");
}

FString UWidgetTool::GetFormattedInputRichTextKey(UObject* _WorldContext, const FKey& _Key) {
    return TEXT("");
}

TArray<UWidget*> UWidgetTool::GetChildrenWidget(UWidget* Parent, TSubclassOf<UUserWidget> WidgetClass) {
    return TArray<UWidget*>();
}

FString UWidgetTool::ConvertIntToLetters(int32 _i) {
    return TEXT("");
}

UHighlightWidget* UWidgetTool::AddHighlightToWidget(UWidget* Child, TSubclassOf<UHighlightWidget> WidgetClass) {
    return NULL;
}


