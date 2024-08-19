#include "ASFCharacter.h"
#include "Engine/EngineTypes.h"
#include "Tinda_EffectHandlerComponent.h"
#include "ASFCharacterAIController.h"
#include "ASFCharacterMovementComponent.h"
#include "DiplomacyComponent.h"
#include "DynamiqueSaveLoadComponent.h"
#include "Templates/SubclassOf.h"
//#include "GameplayTask.h"

AASFCharacter::AASFCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UASFCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AASFCharacterAIController::StaticClass();
    this->DiplomacyComponent = CreateDefaultSubobject<UDiplomacyComponent>(TEXT("DiplomacyComponent"));
    this->AISplineMovementComponent = NULL;
    this->DamageReceiverComponent = NULL;
    this->bSpawnCorpseOnDeath = true;
    this->CoverComponent = NULL;
    this->POIPerceptionComponent = NULL;
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->StatComponent = NULL;
    this->AnimationComponent = NULL;
    this->DynamicSaveLoadComponent = CreateDefaultSubobject<UDynamiqueSaveLoadComponent>(TEXT("DynamicSaveLoadComponent"));
    this->ActivityManager = NULL;
    this->ItemEquipped = NULL;
    this->refreshFreezeMeshVelocityRate = 1.00f;
    this->BoneNameToSaveVelocity = TEXT("Root");
    this->ASFCharacterAIController = NULL;
    this->bIsSpawning = false;
    this->bTempDisableUseFailSafeMovement = false;
    this->InPowerLoaderId = -1;
    this->TimeInCombat = 0.00f;
    this->NarrativeFreezeEffect = NULL;
    this->DrivingRailSpline = NULL;
    this->RailSplineActor = NULL;
    this->BindToSignificantManager = false;
    this->DestroyedReason = EEndPlayReason::Destroyed;
    this->CheckIfFallenAfterEveryMove = false;
}

void AASFCharacter::SuspendCrowdManager(bool bSuspend) {
}

void AASFCharacter::SetSpawnCorpseOnDeath_Implementation(bool _bSpawnCorpseOnDeath) {
}

void AASFCharacter::SetSight(TArray<FCharacterSightProperties> _Sight) {
}

void AASFCharacter::SetMeshVelocityToZero() {
}

void AASFCharacter::SetMeshMaterialInstance_Implementation(bool _bIsLeader) {
}

void AASFCharacter::SetItemEquipped(AItem* _ItemEquipped) {
}

bool AASFCharacter::Rotate(FVector _Destination) {
    return false;
}

void AASFCharacter::ResetMeshVelocity() {
}

void AASFCharacter::ReportStep_Implementation() {
}

void AASFCharacter::RemoveFromPlayableArea() {
}

void AASFCharacter::RemoveFromCrowdManager() {
}

bool AASFCharacter::ProjectPointToNavigationForPawn(const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent) {
    return false;
}

void AASFCharacter::OpenInteractionGUI_Implementation() {
}

void AASFCharacter::OnSubLevelIsLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AASFCharacter::OnStunReaction(UDamageReceiverComponent* _DamageReceiverComponent, FGameplayTag _Reaction) {
}

void AASFCharacter::OnRotateInPlaceFinished(UASFCharacterMovementComponent* MovementComponent) {
}

void AASFCharacter::OnMissionHasBeenLoaded(AASFGameModeBase_TacticalMode* GameMode) {
}

void AASFCharacter::OnImpactReaction(UDamageReceiverComponent* _DamageReceiverComponent, FGameplayTag _Reaction) {
}

void AASFCharacter::OnCharacterDeath_Implementation(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult) {
}

void AASFCharacter::OnAnimationReadyForImpact(UObject* _Source) {
}

void AASFCharacter::NarrativeFreezeStatusChanged_Implementation(bool IsActive, UNarrativeFreezeGameplayAction* NarrativeFreezeGA) {
}


void AASFCharacter::MeshLoaded() {
}

bool AASFCharacter::IsRotatingInPlace() {
    return false;
}

bool AASFCharacter::IsPathValide() const {
    return false;
}

bool AASFCharacter::IsMeshLoaded() const {
    return false;
}

bool AASFCharacter::IsInPlay() const {
    return false;
}

bool AASFCharacter::IsCrowdManagerSuspended() const {
    return false;
}

bool AASFCharacter::IsAPlayerCharacter() {
    return false;
}

bool AASFCharacter::IsAllowedToMove_Implementation() {
    return false;
}

void AASFCharacter::HandleRemovedFromPlayableArea_Implementation() {
}

void AASFCharacter::HandleAddedToPlayableArea_Implementation() {
}

FVector AASFCharacter::GetVisionForwardVector_Implementation() const {
    return FVector{};
}

UStatComponent* AASFCharacter::GetStatComponent() const {
    return NULL;
}

UASM_AISplineMovementComponent* AASFCharacter::GetSplineMovementComponent() const {
    return NULL;
}

FVector AASFCharacter::GetSize_Implementation() {
    return FVector{};
}

TArray<FCharacterSightProperties> AASFCharacter::GetSight() {
    return TArray<FCharacterSightProperties>();
}

FVector AASFCharacter::GetRealForward() const {
    return FVector{};
}

bool AASFCharacter::GetRandomReachablePointInRadiusForPawn(const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool AASFCharacter::GetRandomLocationInNavigableRadiusForPawn(const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

UPOITargetingComponent* AASFCharacter::GetPOITargetingComponent() const {
    return NULL;
}

UAI_POIPerceptionComponent* AASFCharacter::GetPOIPerceptionComponent() const {
    return NULL;
}

float AASFCharacter::GetPathLength() const {
    return 0.0f;
}

TSubclassOf<UNavigationQueryFilter> AASFCharacter::GetNavigationFilterFromTag(FGameplayTag _NavFilterTag) const {
    return NULL;
}

TSubclassOf<UNavigationQueryFilter> AASFCharacter::GetNavigationFilter_Implementation(bool& _HasBeenOverride, bool InfluencedFilter) const {
    return NULL;
}

AItem* AASFCharacter::GetItemEquipped() const {
    return NULL;
}

TEnumAsByte<EEndPlayReason::Type> AASFCharacter::GetEndPlayReason() {
    return EEndPlayReason::Destroyed;
}

UTinda_EffectHandlerComponent* AASFCharacter::GetEffectHandlerComponent() const {
    return NULL;
}

UDynamiqueSaveLoadComponent* AASFCharacter::GetDynamicSaveLoadComponent() const {
    return NULL;
}

UDiplomacyComponent* AASFCharacter::GetDiplomacyComponent() const {
    return NULL;
}

UDamageReceiverComponent* AASFCharacter::GetDamageReceiverComponent() const {
    return NULL;
}

UCoverComponent* AASFCharacter::GetCoverComponent() const {
    return NULL;
}

UCharacterDataAsset* AASFCharacter::GetCharacterDataAssetFromBP_Implementation() const {
    return NULL;
}

UCharacterDataAsset* AASFCharacter::GetCharacterDataAsset() const {
    return NULL;
}

FVector AASFCharacter::GetCharacterAimingLocation_Implementation() const {
    return FVector{};
}

UArrowComponent* AASFCharacter::GetCarryArrow_Implementation() {
    return NULL;
}

AASFCharacterAIController* AASFCharacter::GetASFCharacterAIController() const {
    return NULL;
}

UAnimationComponent* AASFCharacter::GetAnimationComponent() const {
    return NULL;
}

UArrowComponent* AASFCharacter::GetAbductionArrow_Implementation() {
    return NULL;
}

void AASFCharacter::FreezeMeshVelocity() {
}

bool AASFCharacter::FindActionOnPath_Implementation() {
    return false;
}

void AASFCharacter::EquipItem(FGameplayTag _Item) {
}

void AASFCharacter::DisableCapsuleComponent_Implementation() {
}

void AASFCharacter::DisableAllComponent_Implementation() {
}


void AASFCharacter::ClearUnwantedComponent() {
}

bool AASFCharacter::CanReceiveMoveCommand() {
    return false;
}

void AASFCharacter::BindOnGameSpeedChange(AASFPlayerController* ASFController, float Value) {
}

void AASFCharacter::BeginPlay() {
}

void AASFCharacter::ApplyStun_Implementation(FGameplayTag _ImpactTag, float _ImpactDuration) {
}

void AASFCharacter::ApplyImpact_Implementation(FGameplayTag _ImpactTag, float _ImpactDuration) {
}

void AASFCharacter::AddToPlayableArea(const FVector& NewLocation) {
}

void AASFCharacter::AddToCrowdManager() {
}

void AASFCharacter::AddActivity(UActivity* _Activity) {
}


