#include "CoverComponent.h"

UCoverComponent::UCoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoverPrevisualisationActorClass = NULL;
    this->SegmentDistanceThreshold = 200.00f;
    this->CoverProtectionAngle = 75.00f;
    this->CoverPrevisualisationActor = NULL;
    this->Character = NULL;
    this->CoverStateUpdate_Rate = 0.50f;
    this->MaxTimeAuthorizedOutsideCover = 1.40f;
    this->bUnderCover = false;
    this->bCoverDisplay = false;
    this->CoverEffect = NULL;
    this->RoomGraph_Cover = NULL;
    this->CurrentTimeSpentOutsideCover = 0.00f;
    this->CoverPoiDataAsset = NULL;
}

void UCoverComponent::Update() {
}

void UCoverComponent::Undercover() {
}

void UCoverComponent::StopCoverSystem() {
}

void UCoverComponent::StartCoverSystem() {
}

void UCoverComponent::SetEQSData(UPointOfInterest_DataAsset* _CoverPoiDataAsset, FVector _ThreatPosition) {
}

void UCoverComponent::SetCoverDisplay(bool _bCoverDisplay) {
}

void UCoverComponent::SaveCoverPosition(FVector _CoverPosition, bool _ReserveCover, URoomGraph_Cover* _RoomGraph_Cover) {
}

FVector UCoverComponent::RetrieveSearchLocation(FVector _CoverSearchPoint) {
    return FVector{};
}

void UCoverComponent::OnOwnerDeath(AASFCharacter* _ASFCharacter, const FDamageResultStruct& _DamageResult) {
}

void UCoverComponent::NotUndercover(bool _AuthorizeTimeOutsideCover) {
}

bool UCoverComponent::IsUnderCoverFromLocation(FVector _ThreatLocation) {
    return false;
}

bool UCoverComponent::IsCloseToCover() const {
    return false;
}

void UCoverComponent::InitCoverSystem(AASFCharacter* _Character) {
}

FVector UCoverComponent::GetThreatLocation() const {
    return FVector{};
}

float UCoverComponent::GetSegmentDistanceThreshold() const {
    return 0.0f;
}

URoomGraph_Cover* UCoverComponent::GetRoomGraph_Cover() const {
    return NULL;
}

void UCoverComponent::GetPotentialCoversFromResult(UPOIDefaultContainer* _SenseResult, FVector CoverSearchLocation, FVector _ThreatLocation, float coverDist, TArray<FVector>& _OutLocations) {
}

UAIPointOfInterestVolatile* UCoverComponent::GetPotentialCoversFromLocation(FVector _ThreatLocation, FVector _OverrideSearchLocation, UPointOfInterest_DataAsset* _POICover_DataAsset, TArray<FVector>& _OutLocations) {
    return NULL;
}

//void UCoverComponent::GetFlankingStatus(FEvent_FlankingStatusUpdated& FlankingStatusUpdated) {}

float UCoverComponent::GetCoverProtectionAngle() const {
    return 0.0f;
}

UPointOfInterest_DataAsset* UCoverComponent::GetCoverPoi_DataAsset() const {
    return NULL;
}

FVector UCoverComponent::GetCoverLocation() const {
    return FVector{};
}

ECoverType UCoverComponent::GetCoverDodgeType(FVector _ThreatLocation) {
    return ECoverType::NONE;
}

bool UCoverComponent::GetCoverDisplay() const {
    return false;
}


