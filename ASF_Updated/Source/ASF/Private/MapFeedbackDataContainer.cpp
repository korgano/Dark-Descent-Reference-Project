#include "MapFeedbackDataContainer.h"

UMapFeedbackDataContainer::UMapFeedbackDataContainer() {
    this->WidgetsCanvas = NULL;
    this->bIsDisplayed = false;
    this->bIsCurrentSubLevelContainer = false;
    this->LevelSaveGame = NULL;
}

void UMapFeedbackDataContainer::UpdateWifgetPosition(UMapFeedbackData_UserWidget* MapFeedbackData_UserWidget) {
}

void UMapFeedbackDataContainer::RemoveGrapnelWidget(UMapFeedbackData_UserWidget* GrapnelWidget) {
}

void UMapFeedbackDataContainer::RegisterWidgetToContainer(FName _ObjectName, UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, bool _bIsMapped) {
}

void UMapFeedbackDataContainer::RegisterMovingWidgetToContainer(UObject* WidgetOwner, UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, bool _bIsMapped) {
}

void UMapFeedbackDataContainer::RegisterDynamicWidgetToContainer(AActor* WidgetOwner, UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, bool _bIsMapped) {
}

UMapFeedbackData_UserWidget* UMapFeedbackDataContainer::GetWidgetByName(FName _ObjectName) {
    return NULL;
}

UMapFeedbackData_UserWidget* UMapFeedbackDataContainer::GetMovingWidget(UObject* WidgetOwner) {
    return NULL;
}

TArray<UMapFeedbackData_UserWidget*> UMapFeedbackDataContainer::GetGrapnelWidgets() const {
    return TArray<UMapFeedbackData_UserWidget*>();
}

UMapFeedbackData_UserWidget* UMapFeedbackDataContainer::GetDynamicWidget(AActor* WidgetOwner) {
    return NULL;
}

void UMapFeedbackDataContainer::DisplayWidgets(bool _bIsDisplay) {
}

void UMapFeedbackDataContainer::DestroyMovingWidget(UObject* WidgetOwner) {
}

void UMapFeedbackDataContainer::DestroyDynamicWidget(AActor* WidgetOwner) {
}

void UMapFeedbackDataContainer::ClearAllWidget() {
}

void UMapFeedbackDataContainer::ChangeWidgetCategory(UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, EnumFeedbackDataType _FeedbackType) {
}

void UMapFeedbackDataContainer::AddGrapnelWidget(UMapFeedbackData_UserWidget* GrapnelWidget) {
}


