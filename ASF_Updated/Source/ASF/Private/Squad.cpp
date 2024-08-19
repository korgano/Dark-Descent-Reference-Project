#include "Squad.h"
#include "Tinda_EffectHandlerComponent.h"
#include "DiplomacyComponent.h"
#include "Templates/SubclassOf.h"

ASquad::ASquad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInit = false;
    this->SquadID = 0;
    this->AssociatedSpawner = NULL;
    this->SquadController = NULL;
    this->DiplomacyComponent = CreateDefaultSubobject<UDiplomacyComponent>(TEXT("DiplomacyComponent"));
    this->SquadLeader = NULL;
    this->WeaponSentry_DataAsset = NULL;
    this->AllMarineHaveBeenInitialized = false;
    this->MemberFightingStateRemanence = 10.00f;
    this->bPlayerSquad = false;
    this->PendingMemberInitCount = 0;
    this->NbAllies = 0;
    this->SkillClassesDataTable = NULL;
    this->SquadDirectivesClassesDataTable = NULL;
    this->lastStanceUsed = NULL;
    this->DefaultStance = NULL;
    this->DefaultStanceClass = NULL;
    this->LightFocus_DataAsset = NULL;
    this->PriorityTarget = NULL;
    this->ActionSquadPrioritySystem = NULL;
    this->SquadPrioritySystemDataAsset = NULL;
    this->MoveToFormationActionClass = NULL;
    this->NavMeshInfluenceSphereRadius = 800.00f;
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->SearchCoverRadius = 0.00f;
    this->bEnableCover = false;
    this->RoomGuarded = NULL;
    this->SquadClassDataAsset = NULL;
    this->DefaultBehavior = EnumSquadType::REGULAR;
    this->PatrolPath = NULL;
    this->CommandPointRefillDuration = NULL;
    this->CommandPointRefillDurationCoef = NULL;
    this->CommandPointMax = NULL;
    this->NbMarineMovementCompleted = 0;
    this->MovementCompleted = false;
    this->MovementOngoing = false;
    this->SquadIntentionState = EnumAiEnemyMarineState::GUARD;
}

void ASquad::UpdateSquadLeader() {
}

void ASquad::UpdatePerceptiedEnemies(const TArray<AActor*>& _PerceptiedEnemies) {
}

void ASquad::UnlistenToMembersTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate) {
}

void ASquad::SwitchCover(bool _Enable) {
}

bool ASquad::StopAction(FGameplayTag ActionTag) {
    return false;
}

UAIAction* ASquad::StartAction(FGameplayTag ActionTag, FDataMove _DataMove, AActor* Target, bool AutoExecute, bool InterruptCurrentAction, bool _bPlayerCommand) {
    return NULL;
}

void ASquad::Start() {
}

void ASquad::SquadStatusUpdated(ASquad* _Squad, AHumanoidMarine* _Character) {
}

TArray<UAction*> ASquad::SquadMoveEQS_Implementation(FDataMove _DataMove) {
    return TArray<UAction*>();
}

void ASquad::SetThreatLocation(FVector _ThreatLocation) {
}

void ASquad::SetSquadID(int32 _SquadID) {
}

void ASquad::SetSquadDestination(EnumAiEnemyMarineState _MarineState, FVector _Destination) {
}

void ASquad::SetSquadController(AAIController_Squad* _Controller) {
}

void ASquad::SetSearchCoverRadius(float _SearchCoverRadius) {
}

void ASquad::SetRoomGuarded(AGuardRoom* _RoomGuarded) {
}

void ASquad::SetPriorityTarget(AActor* _Target) {
}

void ASquad::SetPerceptionLocation(FVector _PerceptionLocation) {
}

void ASquad::SetLeader(AHumanoidMarine* NewLeader) {
}

void ASquad::SetLastStanceUsed(UDirective_Stance* stance) {
}

void ASquad::SetIsInit(bool newIsInit) {
}

void ASquad::SecureSquadMemberInAPC(AHumanoidMarine* Member) {
}

void ASquad::SaveSentry(FSentrySaved _Sentry) {
}

void ASquad::RemoveSquadMember(AHumanoidMarine* Member) {
}

void ASquad::RemoveDynamicSkill(FGameplayTag Skill) {
}

void ASquad::RemoveAlly(AASFCharacter* _Ally) {
}

FVector ASquad::RecenterPoint(FVector _LocationStart, FVector _LocationEnd) {
    return FVector{};
}

FSentrySaved ASquad::PopBestSentry() {
    return FSentrySaved{};
}

void ASquad::OnScriptedActionStop(UAIActionComponent* _AIActionComponent) {
}

void ASquad::OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort) {
}

void ASquad::OnPriorityTargetVisibilityChange(AActor* _Target, bool _Visible) {
}

void ASquad::OnPriorityTargetDeathOrDestroyed(AASFCharacter* TargetKilled) {
}

void ASquad::OnNewEffectActivated(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect) {
}

void ASquad::OnMemberUnconsciousChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded) {
}

void ASquad::OnMemberInitializedOnLoad(AHumanoid* Member) {
}

void ASquad::OnMemberInitialized(AHumanoid* Member) {
}

void ASquad::OnMemberFiringChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded) {
}

void ASquad::OnMemberDestroyed(AActor* Member) {
}

void ASquad::OnMemberDeath(AASFCharacter* Member, const FDamageResultStruct& _DamageResult) {
}

void ASquad::OnAllyDestroyed(AActor* _ActorKilled, EnumDestroyReason _DestroyReason) {
}

void ASquad::MemberNotifyMovementCompleted(EnumAiEnemyMarineState _MarineState) {
}

void ASquad::ListenToMembersTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate, bool _bExact) {
}

bool ASquad::IsStarted() const {
    return false;
}

bool ASquad::IsSquadWeakened() const {
    return false;
}

bool ASquad::IsPlayerSquad() {
    return false;
}

bool ASquad::IsMemberFighting(AHumanoidMarine* _Member) const {
    return false;
}

bool ASquad::IsCoverEnable() {
    return false;
}

bool ASquad::IsClosestMember(AHumanoidTactical* Marine, FVector Position, float MaximumRotation) const {
    return false;
}

bool ASquad::IsAMember(AActor* _Actor) {
    return false;
}

bool ASquad::HasWaitingState() const {
    return false;
}

bool ASquad::HasMoveOngoing(EnumAiEnemyMarineState _MarineState) const {
    return false;
}

bool ASquad::HasEnemyInSight() const {
    return false;
}

void ASquad::GiveMoveTo(FStructCursorHit _CursorHit, bool _bIsShift) {
}

FVector ASquad::GetThreatLocation() {
    return FVector{};
}

EnumSquadType ASquad::GetSquadType() {
    return EnumSquadType::REGULAR;
}

USquadPrioritySystem_DataAsset* ASquad::GetSquadPrioritySystemDataAsset() {
    return NULL;
}

TArray<AHumanoidMarine*> ASquad::GetSquadMembersInAPC() const {
    return TArray<AHumanoidMarine*>();
}

TArray<AHumanoidMarine*> ASquad::GetSquadMembersEnabled() const {
    return TArray<AHumanoidMarine*>();
}

TArray<AHumanoidMarine*> ASquad::GetSquadMembersDisable() const {
    return TArray<AHumanoidMarine*>();
}

TArray<AHumanoidMarine*> ASquad::GetSquadMembersDead() const {
    return TArray<AHumanoidMarine*>();
}

TArray<AHumanoidTactical*> ASquad::GetSquadMembersAsHumanoid() const {
    return TArray<AHumanoidTactical*>();
}

TArray<AHumanoidTactical*> ASquad::GetSquadMembersAndAlliesInFormation() const {
    return TArray<AHumanoidTactical*>();
}

TArray<AHumanoidTactical*> ASquad::GetSquadMembersAndAllies() const {
    return TArray<AHumanoidTactical*>();
}

TArray<AHumanoidMarine*> ASquad::GetSquadMembers() const {
    return TArray<AHumanoidMarine*>();
}

AHumanoidMarine* ASquad::GetSquadMemberByID(int32 _Id) const {
    return NULL;
}

int32 ASquad::GetSquadID() {
    return 0;
}

TArray<UDirective*> ASquad::GetSquadDirectives() const {
    return TArray<UDirective*>();
}

UDirective* ASquad::GetSquadDirectiveByClass(TSubclassOf<UDirective> _DirectiveClass) const {
    return NULL;
}

AAIController_Squad* ASquad::GetSquadController() {
    return NULL;
}

FVector ASquad::GetSquadCenter_IsolatedMemberExcluded() {
    return FVector{};
}

ASquad* ASquad::GetSquad(AActor* Target) {
    return NULL;
}

USkill* ASquad::GetSkillWithTag(FGameplayTag SkillTag) {
    return NULL;
}

USkill* ASquad::GetSkillWithShortcut(FName _ShortcutName) {
    return NULL;
}

TArray<USkill*> ASquad::GetSkills() const {
    return TArray<USkill*>();
}

AGuardRoom* ASquad::GetRoomGuarded() {
    return NULL;
}

AHumanoidMarine* ASquad::GetRandomMember(const FGameplayTagQuery& _QueryToRespect) const {
    return NULL;
}

AActor* ASquad::GetPriorityTarget() {
    return NULL;
}

float ASquad::GetPointSpaceWeight(FVector _Location, AController* _Controller, float _RayLength, int32 _NbRay) {
    return 0.0f;
}

FVector ASquad::GetPerceptionLocation() {
    return FVector{};
}

TArray<AActor*> ASquad::GetPerceptiedEnemies() const {
    return TArray<AActor*>();
}

UAction* ASquad::GetOngoingAction(AActor*& Member) {
    return NULL;
}

FVector ASquad::GetNavPosition(const TArray<FVector>& EQSResult, FVector Origine, FVector CorrectDirection) {
    return FVector{};
}

FVector ASquad::GetMemberFormationInSquad(FVector _FormationCenter, float _MaxDistFromLeader, float _MinDistFromLeader, float _AngleVariance, APawn* _Member) {
    return FVector{};
}

int32 ASquad::GetMarinePositionInSquad(AHumanoidMarine* Marine) {
    return 0;
}

UMotionTrackerComponent* ASquad::GetLeaderTrackerComponent() const {
    return NULL;
}

AHumanoidMarine* ASquad::GetLeader() const {
    return NULL;
}

bool ASquad::GetIsInit() {
    return false;
}

UInventoryComponent* ASquad::GetInventory() {
    return NULL;
}

int32 ASquad::GetHumanoidID() const {
    return 0;
}

AHumanoidMarine* ASquad::GetFocusActivityMarine() const {
    return NULL;
}

TArray<FVector> ASquad::GetEmptySpaces(FVector _Location, AController* _Controller, float _RayLength, int32 _NbRay) {
    return TArray<FVector>();
}

UDiplomacyComponent* ASquad::GetDiplomacyComponent() const {
    return NULL;
}

FVector ASquad::GetDestination() const {
    return FVector{};
}

URoomGraph_Cover* ASquad::GetCoversFromLocation(UObject* _Querier, FVector _Location, float _RoomGraphCoverSearchRadius, TSubclassOf<UNavigationQueryFilter> _FilterClass, float _ProtectionAngle, float _SegmentMaxDistance, TArray<FVector>& _CoversResult, FVector& _ThreatDir) {
    return NULL;
}

UTinda_Attribute* ASquad::GetCommandPointMaxAttribute() {
    return NULL;
}

float ASquad::GetCommandPointMax(bool bRounded) {
    return 0.0f;
}

AHumanoidMarine* ASquad::GetClosestMemberFrom(AHumanoidMarine* _Member, const FGameplayTagQuery& _QueryToRespect) const {
    return NULL;
}

FVector ASquad::GetAverageMembersLocation() {
    return FVector{};
}

TArray<AHumanoidMarine*> ASquad::GetAllMarinesSorted() const {
    return TArray<AHumanoidMarine*>();
}

TArray<AASFCharacter*> ASquad::GetAlliesUnconscious() const {
    return TArray<AASFCharacter*>();
}

TArray<AASFCharacter*> ASquad::GetAllies(bool _bIncludingMembers, bool _IncludingDead) const {
    return TArray<AASFCharacter*>();
}

UActionSquadPrioritySystem* ASquad::GetActionSquadPrioritySystem() {
    return NULL;
}

void ASquad::EnableSquadMember(AHumanoidMarine* Member) {
}

void ASquad::DisableSquadMember(AHumanoidMarine* Member) {
}


void ASquad::CreateSkillsForMember(AHumanoidMarine* Member) {
}

void ASquad::CreateActionSquadPrioritySystem() {
}

float ASquad::ComputeWeightForDirection(AHumanoidMarine* Marine, FVector Direction, FVector SquadCenter) const {
    return 0.0f;
}

void ASquad::CheckAllMarineSameHoldFiringState(bool& sameHoldFiringState, bool& holdFiringState) const {
}

void ASquad::AskMoveTo(FStructCursorHit _CursorHit, bool _bIsShift) {
}

bool ASquad::AnyMemberHasEffectOfClass(const TSubclassOf<UTinda_Effect> _Class, bool _ConsiderOnlyActivated) const {
    return false;
}

void ASquad::AddSquadMember(AHumanoidMarine* Member, bool _bIsLoaded) {
}

void ASquad::AddSquadDirective(const TSoftClassPtr<UDirective>& NewDirective) {
}

void ASquad::AddDynamicSkill(FGameplayTag NewSkill) {
}

void ASquad::AddAlly(AASFCharacter* _Ally) {
}


