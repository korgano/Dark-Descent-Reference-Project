#include "InfluenceMapWeigherComponent.h"
#include "Templates/SubclassOf.h"

UInfluenceMapWeigherComponent::UInfluenceMapWeigherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeigherAreaClass = NULL;
    this->BinaryInfluenceMaskChunkNbr = 3;
    this->bIsAI = true;
    this->FactionWeighting = false;
    this->bIsStatic = false;
    this->bIsTemporary = false;
    this->bInfluenceDecreaseOverTime = false;
    this->IsNavBlocker = false;
    this->bIsGhostWeighting = false;
    this->bUseExternalWeighting = false;
    this->InfluenceGivenFactionOnStart = true;
    this->InvalidateNavigationOnNewGeometry = false;
    this->InfluencingTime = 60.00f;
    this->InfluencingCurve = NULL;
    this->WeightMultiplier = 0.00f;
    this->InfluenceMapQuery = NULL;
    this->BinaryInfluenceMaskCellNbr = 0;
    this->BinaryInfluenceMaskWorldSize = 0;
    this->bIsNewGeometry = false;
    this->bIsEnable = false;
    this->InfluenceMapManager = NULL;
    this->TopLeftChunkIndex = 0;
    this->WeigherArea = NULL;
    this->activationTime = 0.00f;
    this->FactionMask = 255;
}

void UInfluenceMapWeigherComponent::SetWeigherAreaClass(TSubclassOf<UInfluenceMapArea> _WeigherAreaClass) {
}

void UInfluenceMapWeigherComponent::SetUseExternalWeighting(bool _bUseExternalWeighting) {
}

void UInfluenceMapWeigherComponent::SetIsTemporary(bool _bIsTemporary) {
}

void UInfluenceMapWeigherComponent::SetIsGhostWeighting(bool _bIsGhostWeighting) {
}

void UInfluenceMapWeigherComponent::SetInfluencingTime(float _InfluencingTime) {
}

void UInfluenceMapWeigherComponent::SetInfluenceMapQuery(UInfluenceMapQuery* _InfluenceMapQuery) {
}

void UInfluenceMapWeigherComponent::SetInfluenceGeometry(const TArray<FPolygone>& _InfluenceGeometry) {
}

void UInfluenceMapWeigherComponent::SetInfluenceDecreaseOverTime(bool _bInfluenceDecreaseOverTime) {
}

void UInfluenceMapWeigherComponent::RemoveInfluencedFaction(FGameplayTag _InfluencedFaction) {
}

void UInfluenceMapWeigherComponent::RemoveExternalWeighter(UObject* _ExternalWeighter, float _WeightMultiplier) {
}

void UInfluenceMapWeigherComponent::RefreshWeigher() {
}

void UInfluenceMapWeigherComponent::OnInfluenceMapSet_Implementation(AASFGameModeBase_TacticalMode* _GameMode, AInfluenceMapManager* _InfluenceMapManager) {
}

void UInfluenceMapWeigherComponent::OnInfluenceMapDeleted_Implementation(AInfluenceMapManager* _InfluenceMapManager) {
}

bool UInfluenceMapWeigherComponent::IsInfluencingFaction(FGameplayTag _InfluencedFaction) const {
    return false;
}

bool UInfluenceMapWeigherComponent::IsInfluencingAnyFaction() const {
    return false;
}

bool UInfluenceMapWeigherComponent::IsInfluencingAllFaction() const {
    return false;
}

void UInfluenceMapWeigherComponent::InitWeigher(AInfluenceMapManager* _InfluenceMapManager) {
}

float UInfluenceMapWeigherComponent::GetWeightMultiplier() const {
    return 0.0f;
}

int32 UInfluenceMapWeigherComponent::GetWeigherAreaID() const {
    return 0;
}

bool UInfluenceMapWeigherComponent::GetUseExternalWeighting() const {
    return false;
}

bool UInfluenceMapWeigherComponent::GetIsGhostWeighting() const {
    return false;
}

bool UInfluenceMapWeigherComponent::GetIsEnable() const {
    return false;
}

bool UInfluenceMapWeigherComponent::GetIsAI() const {
    return false;
}

float UInfluenceMapWeigherComponent::GetInfluencingTime() const {
    return 0.0f;
}

UInfluenceMapQuery* UInfluenceMapWeigherComponent::GetInfluenceMapQuery() const {
    return NULL;
}

AInfluenceMapManager* UInfluenceMapWeigherComponent::GetInfluenceMapManager() const {
    return NULL;
}

TArray<FPolygone> UInfluenceMapWeigherComponent::GetInfluenceGeometry() const {
    return TArray<FPolygone>();
}

int32 UInfluenceMapWeigherComponent::GetBinaryInfluenceMaskCellNbr() const {
    return 0;
}

float UInfluenceMapWeigherComponent::GetActivationTime() const {
    return 0.0f;
}

TArray<FPolygone> UInfluenceMapWeigherComponent::GeneratePathQuadGeometryMask(FVector _GeometryLocation, TArray<FVector> _PathPoints, int32 _Width, bool _LocalCoordinate) {
    return TArray<FPolygone>();
}

FPolygone UInfluenceMapWeigherComponent::GenerateLineQuadGeometryMask(FVector _GeometryLocation, FVector _Start, FVector _End, int32 _Width, bool _LocalCoordinate) {
    return FPolygone{};
}

FPolygone UInfluenceMapWeigherComponent::GenerateGeometryMaskByRay(FVector _GeometryLocation, const TArray<FVector>& _Rays, FVector _Direction, float _Width, float _Angle, bool _OriginVertex, bool _LocalCoordinate) {
    return FPolygone{};
}

FPolygone UInfluenceMapWeigherComponent::GenerateConeGeometryMask(FVector _GeometryLocation, FVector _Start, FVector _Direction, float _Width, float _Angle, bool _LocalCoordinate) {
    return FPolygone{};
}

FPolygone UInfluenceMapWeigherComponent::GenerateCircleGeometryMask(FVector _GeometryLocation, int32 _PointNbr, int32 _Radius, bool _LocalCoordinate) {
    return FPolygone{};
}

void UInfluenceMapWeigherComponent::EnableWeighter() {
}

void UInfluenceMapWeigherComponent::DisableWeighter() {
}

void UInfluenceMapWeigherComponent::ClearWeigtedChunk() {
}

void UInfluenceMapWeigherComponent::ClearExternalWeighter() {
}

void UInfluenceMapWeigherComponent::AddInfluencedFaction(FGameplayTag _InfluencedFaction) {
}

void UInfluenceMapWeigherComponent::AddExternalWeighter(UObject* _ExternalWeighter, float _WeightMultiplier) {
}


