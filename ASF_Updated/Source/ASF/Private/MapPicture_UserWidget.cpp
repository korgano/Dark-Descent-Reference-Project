#include "MapPicture_UserWidget.h"
#include "Templates/SubclassOf.h"

UMapPicture_UserWidget::UMapPicture_UserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapFeedbackDataCanvas = NULL;
    this->LevelSaveGame = NULL;
}

void UMapPicture_UserWidget::RemoveMotionTracker_Implementation(UMapFeedbackData_UserWidget* MotionTrackerWidget) {
}

void UMapPicture_UserWidget::OnWidgetConstructed_Implementation() {
}

void UMapPicture_UserWidget::NativeDestruct() {
}

bool UMapPicture_UserWidget::IsLoadingWidget() const {
    return false;
}

void UMapPicture_UserWidget::FillWidgetContainer(FName _LevelName, FName _SubLevelName, bool _bIsDisplayed, UMapFeedbackDataContainer* _WidgetContainer) {
}

UMapFeedbackData_StaticObject* UMapPicture_UserWidget::ConstructStaticObject(TSubclassOf<UMapFeedbackData_UserWidget> _StaticObjectClass, const FLevelOpenDataSaveStruct& _LevelOpenData, const FLevelObjectSaveStruct& _SavedObject, AActor* _Owner, UMapFeedbackDataContainer* _MapFeedbackDataContainer, UMapFeedbackDataProperties* _MapFeedbackDataProperties, FName _SubLevelName) {
    return NULL;
}

void UMapPicture_UserWidget::AddMotionTracker_Implementation(UMapFeedbackData_UserWidget* MotionTrackerWidget, FVector4 MotionTrackerCoordinate, bool MovingMotionTracker) {
}


