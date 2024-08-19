#include "PhysicalReactionComponent.h"

UPhysicalReactionComponent::UPhysicalReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RagdollAnimationInfluence = 0.00f;
    this->RagdollAnimationInfluenceMin = 0.00f;
    this->bActivateRagdollConstraint = false;
    this->CurrentRagdollType = EnumCharacterRagdollType::FREE;
    this->fPhysicsBlendRatio = 0.00f;
    this->fTimeBlendPhysics = 0.00f;
    this->bIsInRagdoll = false;
    this->bIsHit = false;
    this->bIsAlive = true;
    this->bActivatePhysicsReaction = true;
    this->CharacterCarried = NULL;
    this->bIsDeadOutOfCamera = false;
    this->bDeathByExecution = false;
    this->DEBUG_NO_TICK = false;
    this->bTickPhysicBlend = false;
    this->bTickRagdoll = false;
    this->bTickDragging = false;
}

void UPhysicalReactionComponent::UnRagdoll_Implementation(bool GetUp) {
}

void UPhysicalReactionComponent::ToggleRagdoll(bool Ragdoll) {
}

void UPhysicalReactionComponent::TickRagdollBlend(float DeltaTime) {
}

void UPhysicalReactionComponent::TickPhysicBlend(float DeltaTime) {
}


AActor* UPhysicalReactionComponent::SpawnNewActorCopse() {
    return NULL;
}

void UPhysicalReactionComponent::SetPhysicsBlendWeight(USkeletalMeshComponent* SkMesh, float PhysicsBlendRatio) {
}

void UPhysicalReactionComponent::SetMeshBonePhysicsType(USkeletalMeshComponent* Mesh, const FName& InBoneName, const FName& BoneNameRoot, TEnumAsByte<EPhysicsType> PhysicsType) {
}

void UPhysicalReactionComponent::SetBoneSimulatePhysics(const FName& InBoneName, bool NewSimulate) {
}

void UPhysicalReactionComponent::SetBonePhysicsType(const FName& InBoneName, TEnumAsByte<EPhysicsType> PhysicsType) {
}

void UPhysicalReactionComponent::SetAllPhysicsType(TEnumAsByte<EPhysicsType> PhysicsType) {
}

void UPhysicalReactionComponent::SetAllParentsPhysicsType(const FName& InBoneName, TEnumAsByte<EPhysicsType> PhysicsType) {
}

void UPhysicalReactionComponent::SetAllBodiesBelowPhysicsType(const FName& InBoneName, TEnumAsByte<EPhysicsType> PhysicsType) {
}

void UPhysicalReactionComponent::SafeSavePoseSnapshot(FName SnapshotName) {
}

bool UPhysicalReactionComponent::RagdollCanDriveMovement() const {
    return false;
}

void UPhysicalReactionComponent::ProjectRagdoll_Implementation(ACharacter* _Character, FVector _Directon, float _Distance, float _Speed, UCurveFloat* _HeightCurve, float _DriftMultiplier, float _JumpAngle, UCurveFloat* _SpeedCurve, float Duration) {
}

void UPhysicalReactionComponent::ProcessHit(USkeletalMeshComponent* Mesh, FVector Impulse, FName InBoneName, bool IsADismemberHit, bool IsAKillingHit) {
}

void UPhysicalReactionComponent::OnOwnerMeshLoaded(AASFCharacter* _ASFCharacter) {
}

void UPhysicalReactionComponent::OnAnimationDeathIsFinish_Implementation(EnumAlienDeathType DeathType) {
}

void UPhysicalReactionComponent::MakePhysicalImpulse_Implementation(USkeletalMeshComponent* Mesh, FVector Impulse, FVector HitLocation, FName InBoneName, bool ForceHit) {
}

bool UPhysicalReactionComponent::LevelExist() const {
    return false;
}

void UPhysicalReactionComponent::LaunchRagdoll_Implementation(EnumCharacterRagdollType Type, bool KeepAttached, bool RagdollWithRotation) {
}

bool UPhysicalReactionComponent::IsInRagdoll() const {
    return false;
}

bool UPhysicalReactionComponent::IsInPhysicalHit() const {
    return false;
}

bool UPhysicalReactionComponent::IsHit() const {
    return false;
}

void UPhysicalReactionComponent::InitPhysicalHitReaction() {
}

void UPhysicalReactionComponent::HideBrokenBodyparts() {
}

FName UPhysicalReactionComponent::GetRandomBoneFromBodyPart() const {
    return NAME_None;
}

USkeletalMeshComponent* UPhysicalReactionComponent::GetMesh_Implementation() const {
    return NULL;
}

FName UPhysicalReactionComponent::GetBoneFromBodyPart(const FGameplayTag _BodyPartTag) const {
    return NAME_None;
}

void UPhysicalReactionComponent::ForceImpulse(FVector Impulse, FName BoneName) {
}

void UPhysicalReactionComponent::ExtremeViolence(USkeletalMeshComponent* Mesh, FVector Impulse, FVector HitLocation, FName InBoneName) {
}


void UPhysicalReactionComponent::DetachFromCharacter_Implementation() {
}

void UPhysicalReactionComponent::CutLowerBody(const FName& InBoneName, UPhysicsAsset* InPhysicsAsset) {
}

void UPhysicalReactionComponent::CutHead(FVector Impulse) {
}


bool UPhysicalReactionComponent::BoneFromBodyPartExist(const FGameplayTag _BodyPartTag) const {
    return false;
}

bool UPhysicalReactionComponent::BodyPartCanBeDismember(const FGameplayTag _BodyPartTag) const {
    return false;
}

void UPhysicalReactionComponent::BishopSlice(FVector Impulse) {
}

void UPhysicalReactionComponent::AttachToCharacter_Implementation(AASFCharacter* Character, FName SocketName) {
}

void UPhysicalReactionComponent::AttachMeshToCapsule_Implementation() {
}


