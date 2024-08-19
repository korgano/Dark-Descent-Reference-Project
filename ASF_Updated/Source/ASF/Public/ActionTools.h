#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorInt.h"
#include "DataCarrierMarine.h"
#include "EDiplomacy.h"
#include "EnumActionType.h"
#include "EnumBreakdown.h"
#include "EnumFOWVisionType.h"
#include "PathSegement.h"
#include "Segment.h"
#include "Templates/SubclassOf.h"
#include "ActionTools.generated.h"

class AASFCharacter;
class AActor;
class AHumanoid;
class AHumanoidMarine;
class AHumanoidTactical;
class ANavigationData;
class ARangeWeapon;
class ASpawnPoint;
class ASquad;
class UAIPointOfInterestContainer;
class UAnimMontage;
class UAnimSequence;
class UBreakdownEffect;
class UInventoryComponent;
class UMarineAttributeDataAssets;
class UNavigationQueryFilter;
class URoomClusterFilter;
class UTinda_Effect;
class UTrackedComponent;

UCLASS(Blueprintable)
class ASF_API UActionTools : public UObject {
    GENERATED_BODY()
public:
    UActionTools();

    UFUNCTION(BlueprintCallable)
    static TArray<FActorInt> SortActorIntByInt(const TArray<FActorInt>& _List);
    
    UFUNCTION(BlueprintCallable)
    static void SetRenderCustomDepthValue(AHumanoidTactical* _HumanoidTactical, bool _Enable);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> SearchUnusedGameplayTag();
    
    UFUNCTION(BlueprintCallable)
    static FRotator RInterpTo(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed, bool bShortestPath);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPathSegement> PointsToSegment(const TArray<FVector>& _Points);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FDataCarrierMarine> MarinesToDataCarrierMarines(const TArray<AHumanoid*>& _Humanoides);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWeaponFacingLocation(AActor* _Actor, FVector _Location, float _Precision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMoveToLocationValid(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMemberAbleToLeaveMap(AHumanoid* _Humaniod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocationInScreen(AActor* Ref, FVector _Location, FVector2D MargeX);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocationInCone(FVector _ConeLocation, FVector _ConeDirection, float _ConeDemiAngle, FVector _TestLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLeft(FVector DirectionStart, FVector DirectionEnd, FVector Point);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInLeaderRadius(UObject* _Context, FVector _Location, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAttributActiveOnHumanoid(AHumanoid* _Humaniod, UMarineAttributeDataAssets* _Attribut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HaveVision(AActor* Context, FVector From, FVector Dest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasEnoughRessourceToReloadWeapon(UInventoryComponent* _Inventory, ARangeWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UTrackedComponent*> GetTrackedEnemies(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetTindaEffectChildren(TSubclassOf<UTinda_Effect> _Ref, UPARAM(Ref) TArray<TSoftClassPtr<UTinda_Effect>>& Subclasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetSelectionLocation(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TMap<AActor*, float> GetReachableActorsForActorUsingPathFinding_RoomGraph(AActor* _Actor, const TArray<AActor*>& _actors, TSubclassOf<URoomClusterFilter> _ClusterFilter, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static TMap<AActor*, float> GetReachableActorsForActorUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AHumanoidTactical* GetNearestMemberWithVision(const TArray<AHumanoidTactical*>& Members, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AHumanoidTactical* GetNearestMemberWithMove(const TArray<AHumanoidTactical*>& Members, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AHumanoidTactical* GetNearestMember(const TArray<AHumanoidTactical*>& Members, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetNavAreaClassAtLocation(FVector _Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMembersWithNearestVision(TArray<AHumanoidTactical*>& _Res, const TArray<AHumanoidTactical*>& _Members, FVector _Destination);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMember_RelativeLocation_InSquadFormation_Randomised(FVector2D _Direction, int32 _Id, int32 _Nb, float _MaxDistanceFromLeader, float _MinDistanceFromLeader, float AngleVariance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMember_RelativeLocation_InSquadFormation(int32 _Id, int32 _Nb, AHumanoidMarine* _Character, float _DistanceFromLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMember_Location_InSquadFormation_Randomised(FVector _LeaderLocation, FVector2D _Direction, ASquad* _Squad, AHumanoidMarine* _Character, float _MaxDistanceFromLeader, float _MinDistanceFromLeader, float AngleVariance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMember_Location_InSquadFormation(FVector _LeaderLocation, ASquad* _Squad, AHumanoidMarine* _Character, float _DistanceFromLeader);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLocationForHumanoidAfterAllAction(AHumanoid* _Humanoid, bool _ignoreLastMove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetItemNeededForSwapping(AHumanoidTactical* _Humanoid, const FGameplayTagContainer& _GameplayTagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AHumanoidTactical* GetFurthestMember(const TArray<AHumanoidTactical*>& Members, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetFiringRateForHumanoid(AHumanoid* _Humanoid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ASpawnPoint*> GetFarthestSpawnPointsForActorUsingPathFinding(AActor* _Actor, const TArray<ASpawnPoint*>& _SpawnPoints, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbSpawnPointsToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetfarthestActorsFromLocationUsingPathfinding(FVector _Location, const TArray<AActor*>& _actors, int32 _NbActorsToFind, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetFarthestActorsForActorUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbActorsToFind);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAIPointOfInterestContainer*> GetEnemiesInMap(AASFCharacter* _Character, bool OnlyAliveOnes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDistBetweenActor(AActor* _A, AActor* _B);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UAIPointOfInterestContainer*> GetDeadPlayerEnemiesInMap(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ASpawnPoint*> GetClosestSpawnPointsForActorUsingPathFinding(AActor* _Actor, const TArray<ASpawnPoint*>& _SpawnPoints, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbSpawnPointsToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetClosestLocationsFromLocation(FVector _Location, const TArray<FVector>& _Locations, int32 _NbActorsToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetClosestLocationInScreen(FVector& _Res, AActor* Ref, const FVector& _Location, FVector2D MargeX);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClosestLocationFromLocationUsingPathFinding_Vector(AActor* _Context, FVector _From, const TArray<FVector>& _Locations, TSubclassOf<UNavigationQueryFilter> _FilterClass, float _MaxDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSegment GetClosestLocationFromLocationUsingPathFinding(AActor* _Context, FVector _From, const TArray<FSegment>& _Locations, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClosestLocationForActorUsingPathFinding(AActor* _Actor, const TArray<FVector>& _Locations, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetClosestActorsFromLocation(FVector _Location, const TArray<AActor*>& _actors, int32 _NbActorsToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<AActor*, float> GetClosestActorsForActorUsingPathFinding_Map(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbActorsToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetClosestActorsForActorUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, int32 _NbActorsToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetClosestActorsForActor(AActor* _Actor, const TArray<AActor*>& _actors, int32 _NbActorsToFind);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetChildrenGameplayTag(FGameplayTag _MatchingTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetBoneTransFromSequence(UAnimSequence* InSequence, FName BoneName, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetBoneTransFromMontage(UAnimMontage* InMontage, FName BoneName, float InTime);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetAtLeastOneReachableActorForActorsUsingPathFinding(AActor* _Actor, const TArray<AActor*>& _actors, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UAIPointOfInterestContainer*> GetAllPlayerEnemiesInMap(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UAIPointOfInterestContainer*> GetAlivePlayerEnemiesInMap(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTransformInArray(const TArray<FTransform>& _Transforms, FTransform _Transform, float _Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindClosestVisiblePointFromlocation_UsingPath(FVector Origin, FVector Destination, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, TEnumAsByte<ECollisionChannel> _CollisionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindClosestVisiblePointFromlocation_InDirection(AActor* _WorldRef, FVector Origin, FVector Destination);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AASFCharacter*> FilterMarinesByBusiness(const TArray<AHumanoidMarine*>& List, bool bIsBusy);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AHumanoid*> FilterHumanoidByWeapon(const TArray<AHumanoid*>& _List, FGameplayTag _WeaponTag, bool _HasToBeEquiped);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AASFCharacter*> FilterHumanoidByBusiness(const TArray<AHumanoid*>& List, bool bIsBusy);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AHumanoid*> FilterHumanoidByActionState(const TArray<AHumanoid*>& _List, EnumActionType _ActionType, bool _bHasAction);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterByDistance(FVector Center, const TArray<AActor*>& _List, float _MinDist, float _MaxDist);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterActorsByTag_BP(const TArray<AActor*>& _actors, const FGameplayTag Tag, bool _bHasTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> FilterActorsByDiploWithActor(AActor* _ActorRef, const TArray<AActor*>& _actors, const TArray<EDiplomacy>& _Diplos);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterActorRelativeLocationFromActor(const AActor* From, const TArray<AActor*>& Targets, const float AngleFromForward);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterActorByFOWVisibility(const TArray<AActor*>& _List, EnumFOWVisionType _Visibility);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterActorByBleepVisibility(const TArray<AActor*>& _List, bool _bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    static UBreakdownEffect* ApplyForcedBreakdown(AASFCharacter* _CharacterToBreakdown, const TSoftClassPtr<UBreakdownEffect>& _BreakdownEffectClass, EnumBreakdown _Type, bool _AsANewBreakdown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActorHasOtherActorInSight(AActor* _Character, AActor* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActorHasEnemyInSight(AActor* _Character);
    
};

