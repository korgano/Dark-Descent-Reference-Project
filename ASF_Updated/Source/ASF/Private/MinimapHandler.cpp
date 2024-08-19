#include "MinimapHandler.h"

AMinimapHandler::AMinimapHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MTMinimapZoomMultiplier = 1.00f;
    this->MapImage = NULL;
    this->MapPicture = NULL;
    this->MapTexturePanelSlot = NULL;
    this->MinimapType = EMinimapType::DEFAULT;
    this->IsSubLevelLoaded = false;
    this->CanFocusObjectif = true;
    this->bIsOnObjectifColumn = false;
    this->OverredUserWidget = NULL;
    this->DefaultMinimapZoom = 2.00f;
    this->MinimapZoom = 1.00f;
    this->MinimapZoomSpeed = 0.10f;
    this->MapBoundWidget = NULL;
    this->RenderScale = 1.00f;
    this->HoveredWidget = NULL;
    this->MinimapSubLevel = NULL;
    this->MapShader = NULL;
    this->Collection = NULL;
    this->DisplayFrustumOnMap_Cheat = false;
    this->DisplayFrustumUV_Cheat = false;
    this->DisplayFrustumWithShader_Cheat = true;
    this->CameraFrustumMovingObject = NULL;
}

FVector2D AMinimapHandler::WorldToMinimapUV(FVector Position) const {
    return FVector2D{};
}

FVector2D AMinimapHandler::Vector_WorldToMinimapUV(FVector Vector) const {
    return FVector2D{};
}

void AMinimapHandler::UpdateRenderScale() {
}

FVector2D AMinimapHandler::UpdateMTMinimapShaderOffset(UMaterialParameterCollection* _Collection, FVector _WorldPos, FVector2D _MapPlanSize, FVector2D _MapWorldCenterPos, float _Zoom) {
    return FVector2D{};
}

void AMinimapHandler::UpdateMapSpeed_Implementation() {
}

FVector2D AMinimapHandler::UpdateMapShaderOffset(FVector _WorldPos, FVector2D _MapPlanSize, FVector2D _MapWorldCenterPos, float _Zoom) {
    return FVector2D{};
}

void AMinimapHandler::UpdateMapInformation(FName _MinimapCurrentLevel, FName _MinimapCurrentSubLevel, UMaterialInstanceDynamic* _MapShader, bool _ResetPosition) {
}

void AMinimapHandler::SetOverredUserWidget(UMapFeedbackData_UserWidget* _OverredUserWidget) {
}

void AMinimapHandler::SetMTMinimapZoomMultiplier(const float _MTMinimapZoomMultiplier) {
}

FVector2D AMinimapHandler::SetMapShaderOffset(FVector _WorldPos) {
    return FVector2D{};
}

void AMinimapHandler::SetMapBoundaryWidget(UWidget* _MapBoundWidget) {
}

void AMinimapHandler::SetIncomingMinimapType(EMinimapType _MinimapType) {
}

void AMinimapHandler::SetHoveredWidget(UMapFeedbackData_UserWidget* _HoveredWidget) {
}

void AMinimapHandler::SetDefaultMapName(FName _MinimapLevelName, FName _MinimapSubLevelName) {
}

void AMinimapHandler::RequestMinimapUpdate() {
}

void AMinimapHandler::RemoveObjectifArea(UObject* _ObjectifUserWidget) {
}

void AMinimapHandler::RemoveMovingObject(UMapFeedbackDataComponent* _MovingObject) {
}

void AMinimapHandler::RemoveDynamicObject(AActor* _DynamicObjectActor) {
}

void AMinimapHandler::ReleaseMinimap() {
}

void AMinimapHandler::OnSubLevelUnload(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AMinimapHandler::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AMinimapHandler::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void AMinimapHandler::InitMinimap(UMapPicture_UserWidget* _MapPicture, UCanvasPanelSlot* _MapTexturePanelSlot) {
}

FVector2D AMinimapHandler::GetWidgetCoordinateForZoom(FVector WidgetWorldPosition, float _Zoom) const {
    return FVector2D{};
}

FVector2D AMinimapHandler::GetWidgetCoordinate(FVector WidgetWorldPosition) const {
    return FVector2D{};
}

float AMinimapHandler::GetRenderScale() const {
    return 0.0f;
}

UMapFeedbackData_UserWidget* AMinimapHandler::GetOverredUserWidget() const {
    return NULL;
}

float AMinimapHandler::GetMTMinimapZoomMultiplier() const {
    return 0.0f;
}

float AMinimapHandler::GetMinimapZoom() const {
    return 0.0f;
}

FName AMinimapHandler::GetMinimapSubLevelName() const {
    return NAME_None;
}

USubLevelPrimaryDataAsset* AMinimapHandler::GetMinimapSubLevelDataAsset() const {
    return NULL;
}

FName AMinimapHandler::GetMinimapLevelName() const {
    return NAME_None;
}

FVector AMinimapHandler::GetMapWorldCurrentPos() const {
    return FVector{};
}

FVector2D AMinimapHandler::GetMapWorldCenterPos() const {
    return FVector2D{};
}

UMapPicture_UserWidget* AMinimapHandler::GetMapPicture() const {
    return NULL;
}

bool AMinimapHandler::GetIsOnObjectifColumn() const {
    return false;
}

FBox AMinimapHandler::GetGeometryCenteredAABB(TArray<FVector> _Vertices, float _AABBoffset) const {
    return FBox{};
}

FBox AMinimapHandler::GetGeometryAABB(TArray<FVector> _Vertices, float _AABBoffset, bool _SquareAABB) const {
    return FBox{};
}

TArray<FVector2D> AMinimapHandler::GetAABBWidgetCoordinate(const FBox& _AABB) const {
    return TArray<FVector2D>();
}

void AMinimapHandler::EnableHandleInput_Implementation(bool _IsEnable) {
}

UMapPicture_UserWidget* AMinimapHandler::CreateOrGetMapPicture_Implementation() {
    return NULL;
}

void AMinimapHandler::BlockNextObjectifFocus() {
}

void AMinimapHandler::AddObjectifArea(UObject* _ObjectifUserWidget, const FVector4& _ObjectifAreaCoordinate) {
}

void AMinimapHandler::AddMovingObject(UMapFeedbackDataComponent* _MovingObject) {
}

void AMinimapHandler::AddDynamicObject(AActor* _DynamicObjectActor, FLevelDynamicObjectSaveStruct& _DynamicObjectStruct) {
}


