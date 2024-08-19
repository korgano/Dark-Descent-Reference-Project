#include "TMMapWidget.h"

UTMMapWidget::UTMMapWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UTMMapWidget::SwitchObjectiveMenu_Implementation(bool ClockWise) {
}

void UTMMapWidget::SwitchMissionTab_Implementation(bool Next) {
}

void UTMMapWidget::RequestScollPanelMenu_Implementation(bool ScrollUp) {
}

void UTMMapWidget::PredMenu_Implementation() {
}

void UTMMapWidget::OpenCodexMenu_Implementation(const FGameplayTag& EntryTag) {
}

void UTMMapWidget::OpenCameraView_Implementation(AActor* cameraReference) {
}

void UTMMapWidget::Open_Implementation() {
}

void UTMMapWidget::NextMenu_Implementation() {
}

bool UTMMapWidget::IsOnObjectifColumn_Implementation() const {
    return false;
}

ASecurityCamera* UTMMapWidget::GetSecurityCamera_Implementation() const {
    return NULL;
}

UMaterialInstanceDynamic* UTMMapWidget::GetMapMID_Implementation() const {
    return NULL;
}

void UTMMapWidget::GetGrapnelWidgets_Implementation(TArray<UMapFeedbackData_UserWidget*>& Out) {
}

void UTMMapWidget::DisplayUpperSubLevel_Implementation() {
}

void UTMMapWidget::DisplayDownerSubLevel_Implementation() {
}

void UTMMapWidget::Close_Implementation() {
}

void UTMMapWidget::ClearFOWMinimap_Implementation(bool bOnlyMinimap, bool bCurrentSubLevel, const FName& SubLevelName) {
}

void UTMMapWidget::ChangeDisplayedSubLevel_Implementation(const FString& SubLevel, bool bRealoadMap) {
}

void UTMMapWidget::AddEventList_Implementation(UUserWidget* EventList) {
}


