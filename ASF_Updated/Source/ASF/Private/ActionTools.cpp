#include "ActionTools.h"
#include "Templates/SubclassOf.h"

UActionTools::UActionTools() {
}

TArray<FActorInt> UActionTools::SortActorIntByInt(const TArray<FActorInt>& _List) {
    return TArray<FActorInt>();
}

void UActionTools::SetRenderCustomDepthValue(AHumanoidTactical* _HumanoidTactical, bool _Enable) {
}

TArray<FGameplayTag> UActionTools::SearchUnusedGameplayTag() {
    return TArray<FGameplayTag>();
}

FRotator UActionTools::RInterpTo(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed, bool bShortestPath) {
    return FRotator{};
}

TArray<FPathSegement> UActionTools::PointsToSegment(const TArray<FVector>& _Points) {
    return TArray<FPathSegement>();
}

TArray<FDataCarrierMarine> UActionTools::MarinesToDataCarrierMarines(const TArray<AHumanoid*>& _Humanoides) {
    return TArray<FDataCarrierMarine>();
}

bool UActionTools::K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent) {
    return false;
}

bool UActionTools::IsWeaponFacingLocation(AActor* _Actor, FVector _Location, float _Precision) {
    return false;
}

bool UActionTools::IsMoveToLocationValid(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool UActionTools::IsMemberAbleToLeaveMap(AHumanoid* _Humaniod) {
    return false;
}

bool UActionTools::IsLocationInScreen(AActor* Ref, FVector _Location, FVector2D MargeX) {
    return false;
}

bool UActionTools::IsLocationInCone(FVector _ConeLocation, FVector _ConeDirection, float _ConeDemiAngle, FVector _TestLocation) {
    return false;
}

bool UActionTools::IsLeft(FVector DirectionStart, FVector DirectionEnd, FVector Point) {
    return false;
}

bool UActionTools::IsInLeaderRadius(UObject* _Context, FVector _Location, float Radius) {
    return false;
}

bool UActionTools::IsAttributActiveOnHumanoid(AHumanoid* _Humaniod, UMarineAttributeDataAssets* _Attribut) {
    return false;
}

bool UActionTools::HaveVision(AActor* Context, FVector From, FVector Dest) {
    return false;
}

bool UActionTools::HasEnoughRessourceToReloadWeapon(UInventoryComponent* _Inventory, ARangeWeapon* _Weapon) {
    return false;
}

TArray<UTrackedComponent*> UActionTools::GetTrackedEnemies(UObject* WorldContextObject) {
    return TArray<UTrackedComponent*>();
}

void UActionTools::GetTindaEffectChildren(TSubclassOf<UTinda_Effect> _Ref, TArray<TSoftClassPtr<UTinda_Effect>>& Subclasses) {
}

FVector UActionTools::GetSelectionLocation(UObject* WorldContextObject) {
    return FVector{};
}

TMap<AActor*, float> UActionTools::GetReachableActorsForActorUsingPathFinding_RoomGraph(AActor* _Actor, const TArray<AActor*>& _actors, TSubclassOf<URoomClusterFilter> _ClusterFilter, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass) {
    return TMap<AActor*, float>();
}

TMap<AActor*, float> UActionTools::GetReachableActorsForActorUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass) {
    return TMap<AActor*, float>();
}

AHumanoidTactical* UActionTools::GetNearestMemberWithVision(const TArray<AHumanoidTactical*>& Members, FVector Location) {
    return NULL;
}

AHumanoidTactical* UActionTools::GetNearestMemberWithMove(const TArray<AHumanoidTactical*>& Members, FVector Location) {
    return NULL;
}

AHumanoidTactical* UActionTools::GetNearestMember(const TArray<AHumanoidTactical*>& Members, FVector Location) {
    return NULL;
}

UClass* UActionTools::GetNavAreaClassAtLocation(FVector _Location) {
    return NULL;
}

void UActionTools::GetMembersWithNearestVision(TArray<AHumanoidTactical*>& _Res, const TArray<AHumanoidTactical*>& _Members, FVector _Destination) {
}

FVector UActionTools::GetMember_RelativeLocation_InSquadFormation_Randomised(FVector2D _Direction, int32 _Id, int32 _Nb, float _MaxDistanceFromLeader, float _MinDistanceFromLeader, float AngleVariance) {
    return FVector{};
}

FVector UActionTools::GetMember_RelativeLocation_InSquadFormation(int32 _Id, int32 _Nb, AHumanoidMarine* _Character, float _DistanceFromLeader) {
    return FVector{};
}

FVector UActionTools::GetMember_Location_InSquadFormation_Randomised(FVector _LeaderLocation, FVector2D _Direction, ASquad* _Squad, AHumanoidMarine* _Character, float _MaxDistanceFromLeader, float _MinDistanceFromLeader, float AngleVariance) {
    return FVector{};
}

FVector UActionTools::GetMember_Location_InSquadFormation(FVector _LeaderLocation, ASquad* _Squad, AHumanoidMarine* _Character, float _DistanceFromLeader) {
    return FVector{};
}

FVector UActionTools::GetLocationForHumanoidAfterAllAction(AHumanoid* _Humanoid, bool _ignoreLastMove) {
    return FVector{};
}

FGameplayTag UActionTools::GetItemNeededForSwapping(AHumanoidTactical* _Humanoid, const FGameplayTagContainer& _GameplayTagContainer) {
    return FGameplayTag{};
}

AHumanoidTactical* UActionTools::GetFurthestMember(const TArray<AHumanoidTactical*>& Members, FVector Location) {
    return NULL;
}

FGameplayTag UActionTools::GetFiringRateForHumanoid(AHumanoid* _Humanoid) {
    return FGameplayTag{};
}

TArray<ASpawnPoint*> UActionTools::GetFarthestSpawnPointsForActorUsingPathFinding(AActor* _Actor, const TArray<ASpawnPoint*>& _SpawnPoints, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbSpawnPointsToFind) {
    return TArray<ASpawnPoint*>();
}

TArray<AActor*> UActionTools::GetfarthestActorsFromLocationUsingPathfinding(FVector _Location, const TArray<AActor*>& _actors, int32 _NbActorsToFind, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass) {
    return TArray<AActor*>();
}

TArray<AActor*> UActionTools::GetFarthestActorsForActorUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbActorsToFind) {
    return TArray<AActor*>();
}

TArray<UAIPointOfInterestContainer*> UActionTools::GetEnemiesInMap(AASFCharacter* _Character, bool OnlyAliveOnes) {
    return TArray<UAIPointOfInterestContainer*>();
}

float UActionTools::GetDistBetweenActor(AActor* _A, AActor* _B) {
    return 0.0f;
}

TArray<UAIPointOfInterestContainer*> UActionTools::GetDeadPlayerEnemiesInMap(UObject* WorldContextObject) {
    return TArray<UAIPointOfInterestContainer*>();
}

TArray<ASpawnPoint*> UActionTools::GetClosestSpawnPointsForActorUsingPathFinding(AActor* _Actor, const TArray<ASpawnPoint*>& _SpawnPoints, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbSpawnPointsToFind) {
    return TArray<ASpawnPoint*>();
}

TArray<FVector> UActionTools::GetClosestLocationsFromLocation(FVector _Location, const TArray<FVector>& _Locations, int32 _NbActorsToFind) {
    return TArray<FVector>();
}

void UActionTools::GetClosestLocationInScreen(FVector& _Res, AActor* Ref, const FVector& _Location, FVector2D MargeX) {
}

FVector UActionTools::GetClosestLocationFromLocationUsingPathFinding_Vector(AActor* _Context, FVector _From, const TArray<FVector>& _Locations, TSubclassOf<UNavigationQueryFilter> _FilterClass, float _MaxDist) {
    return FVector{};
}

FSegment UActionTools::GetClosestLocationFromLocationUsingPathFinding(AActor* _Context, FVector _From, const TArray<FSegment>& _Locations, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return FSegment{};
}

FVector UActionTools::GetClosestLocationForActorUsingPathFinding(AActor* _Actor, const TArray<FVector>& _Locations, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass) {
    return FVector{};
}

TArray<AActor*> UActionTools::GetClosestActorsFromLocation(FVector _Location, const TArray<AActor*>& _actors, int32 _NbActorsToFind) {
    return TArray<AActor*>();
}

TMap<AActor*, float> UActionTools::GetClosestActorsForActorUsingPathFinding_Map(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbActorsToFind) {
    return TMap<AActor*, float>();
}

TArray<AActor*> UActionTools::GetClosestActorsForActorUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbActorsToFind) {
    return TArray<AActor*>();
}

TArray<AActor*> UActionTools::GetClosestActorsForActor(AActor* _Actor, const TArray<AActor*>& _actors, int32 _NbActorsToFind) {
    return TArray<AActor*>();
}

TArray<FGameplayTag> UActionTools::GetChildrenGameplayTag(FGameplayTag _MatchingTag) {
    return TArray<FGameplayTag>();
}

FTransform UActionTools::GetBoneTransFromSequence(UAnimSequence* InSequence, FName BoneName, float InTime) {
    return FTransform{};
}

FTransform UActionTools::GetBoneTransFromMontage(UAnimMontage* InMontage, FName BoneName, float InTime) {
    return FTransform{};
}

AActor* UActionTools::GetAtLeastOneReachableActorForActorsUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass) {
    return NULL;
}

TArray<UAIPointOfInterestContainer*> UActionTools::GetAllPlayerEnemiesInMap(UObject* WorldContextObject) {
    return TArray<UAIPointOfInterestContainer*>();
}

TArray<UAIPointOfInterestContainer*> UActionTools::GetAlivePlayerEnemiesInMap(UObject* WorldContextObject) {
    return TArray<UAIPointOfInterestContainer*>();
}

int32 UActionTools::FindTransformInArray(const TArray<FTransform>& _Transforms, FTransform _Transform, float _Tolerance) {
    return 0;
}

FVector UActionTools::FindClosestVisiblePointFromlocation_UsingPath(FVector Origin, FVector Destination, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, TEnumAsByte<ECollisionChannel> _CollisionChannel) {
    return FVector{};
}

FVector UActionTools::FindClosestVisiblePointFromlocation_InDirection(AActor* _WorldRef, FVector Origin, FVector Destination) {
    return FVector{};
}

TArray<AASFCharacter*> UActionTools::FilterMarinesByBusiness(const TArray<AHumanoidMarine*>& List, bool bIsBusy) {
    return TArray<AASFCharacter*>();
}

TArray<AHumanoid*> UActionTools::FilterHumanoidByWeapon(const TArray<AHumanoid*>& _List, FGameplayTag _WeaponTag, bool _HasToBeEquiped) {
    return TArray<AHumanoid*>();
}

TArray<AASFCharacter*> UActionTools::FilterHumanoidByBusiness(const TArray<AHumanoid*>& List, bool bIsBusy) {
    return TArray<AASFCharacter*>();
}

TArray<AHumanoid*> UActionTools::FilterHumanoidByActionState(const TArray<AHumanoid*>& _List, EnumActionType _ActionType, bool _bHasAction) {
    return TArray<AHumanoid*>();
}

TArray<AActor*> UActionTools::FilterByDistance(FVector Center, const TArray<AActor*>& _List, float _MinDist, float _MaxDist) {
    return TArray<AActor*>();
}

TArray<AActor*> UActionTools::FilterActorsByTag_BP(const TArray<AActor*>& _actors, const FGameplayTag Tag, bool _bHasTag) {
    return TArray<AActor*>();
}

TArray<AActor*> UActionTools::FilterActorsByDiploWithActor(AActor* _ActorRef, const TArray<AActor*>& _actors, const TArray<EDiplomacy>& _Diplos) {
    return TArray<AActor*>();
}

TArray<AActor*> UActionTools::FilterActorRelativeLocationFromActor(const AActor* From, const TArray<AActor*>& Targets, const float AngleFromForward) {
    return TArray<AActor*>();
}

TArray<AActor*> UActionTools::FilterActorByFOWVisibility(const TArray<AActor*>& _List, EnumFOWVisionType _Visibility) {
    return TArray<AActor*>();
}

TArray<AActor*> UActionTools::FilterActorByBleepVisibility(const TArray<AActor*>& _List, bool _bIsVisible) {
    return TArray<AActor*>();
}

UBreakdownEffect* UActionTools::ApplyForcedBreakdown(AASFCharacter* _CharacterToBreakdown, const TSoftClassPtr<UBreakdownEffect>& _BreakdownEffectClass, EnumBreakdown _Type, bool _AsANewBreakdown) {
    return NULL;
}

bool UActionTools::ActorHasOtherActorInSight(AActor* _Character, AActor* _Target) {
    return false;
}

bool UActionTools::ActorHasEnemyInSight(AActor* _Character) {
    return false;
}


