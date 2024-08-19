#include "MapFeedbackData_UserWidget.h"

UMapFeedbackData_UserWidget::UMapFeedbackData_UserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Owner = NULL;
    this->MapFeedBackContainer = NULL;
    this->MapFeedBackProperties = NULL;
    this->CanvasPanel = NULL;
    this->bIsActivated = false;
    this->bIsScaleClamped = true;
    this->bIsAffectedByFOWVisibility = false;
    this->RenderScaleMultiplier = 2.00f;
    this->UseRenderScale = true;
    this->UseRenderScaleEvent = false;
    this->bIsGrapnelableWidget = false;
    this->DefaultZOrder = 0;
    this->bHaveBeenSeen = false;
    this->bIsHovered = false;
    this->bMinimapVisible = false;
    this->bBlockGrapnel = false;
}

void UMapFeedbackData_UserWidget::UpdateWidgetState_Implementation() {
}

UFOWRevertedReader* UMapFeedbackData_UserWidget::UpdateVisibilityByReader() {
    return NULL;
}

bool UMapFeedbackData_UserWidget::UpdateVisibility_Implementation(bool _Visibility) {
    return false;
}

void UMapFeedbackData_UserWidget::UpdateFOWVisibility_Implementation() {
}

void UMapFeedbackData_UserWidget::UpdateFOWMinimapVisibility_Implementation(bool _IsMinimapVisible) {
}

void UMapFeedbackData_UserWidget::TriggerWidgetButton_Implementation(int32 _ButtonID) {
}

void UMapFeedbackData_UserWidget::OnWidgetUnHovered_Implementation() {
}

void UMapFeedbackData_UserWidget::OnWidgetHovered_Implementation() {
}

void UMapFeedbackData_UserWidget::OnVisible(AActor* _Owner, bool _Visibility) {
}

void UMapFeedbackData_UserWidget::OnStateChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UMapFeedbackData_UserWidget::OnRenderScaleUpdate_Implementation(AMinimapHandler* _MinimapHandler, float _RenderScale) {
}

void UMapFeedbackData_UserWidget::OnReaderUpdate(UFOWRevertedReader* _FOWReader) {
}

void UMapFeedbackData_UserWidget::OnFOWMinimapCleared(AFOWRevertedManagerActor* FOWManager) {
}

void UMapFeedbackData_UserWidget::OnDiscovered(AActor* _Owner, bool _Visibility) {
}

bool UMapFeedbackData_UserWidget::IsCurrentlyGrapnelable_Implementation() const {
    return false;
}

void UMapFeedbackData_UserWidget::InitWidget() {
}

void UMapFeedbackData_UserWidget::InitVisibility() {
}

void UMapFeedbackData_UserWidget::InitState() {
}

int32 UMapFeedbackData_UserWidget::GetWidgetZOrder_Implementation() const {
    return 0;
}

bool UMapFeedbackData_UserWidget::GetUseRenderScale() const {
    return false;
}

float UMapFeedbackData_UserWidget::GetRenderScaleMultiplier() const {
    return 0.0f;
}

float UMapFeedbackData_UserWidget::GetOpenDataWidgetScale(int32 MapSize) {
    return 0.0f;
}

void UMapFeedbackData_UserWidget::GetObjectTags_Implementation(FGameplayTagContainer& _TagContainer) {
}

FVector4 UMapFeedbackData_UserWidget::GetObjectMapLocation_Implementation() {
    return FVector4{};
}

FVector UMapFeedbackData_UserWidget::GetObjectLocation_Implementation() {
    return FVector{};
}

float UMapFeedbackData_UserWidget::GetMotionTrackerImageSize(int32 MapSize) {
    return 0.0f;
}

bool UMapFeedbackData_UserWidget::GetIsGrapnelableWidget() const {
    return false;
}

bool UMapFeedbackData_UserWidget::GetIsActivated() const {
    return false;
}

void UMapFeedbackData_UserWidget::AppendTagStateModifierArray(const TArray<FGameplayTag>& _TagStateModifierArray) {
}

void UMapFeedbackData_UserWidget::ActivateWidget_Implementation(bool _IsActivated) {
}


