#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "DynamicElementNavAreaClass.h"
#include "Event_ARoomClusterDelegate.h"
#include "Event_ARoomCluster_int32Delegate.h"
#include "GraphDynamicElementBP.h"
#include "NavPolygon.h"
#include "Polygone.h"
#include "PrecomputedPath.h"
#include "PrecomputedPath_Points.h"
#include "RoomClusterPathResult.h"
#include "RoomHasModifieDelegate.h"
#include "Segment.h"
#include "Templates/SubclassOf.h"
#include "RoomCluster.generated.h"

class AASFRecastNavMesh;
class AInfluenceMapManager;
class ANavigationData;
class ARoomCluster;
class UNavAreaBase;
class UNavigationQueryFilter;
class UObject;
class UProceduralMeshComponent;
class URoomClusterAstar;
class URoomClusterFilter;
class URoomClusterGraph;
class URoomGraph_Cover;
class URoomGraph_RoomDynamicElement;

UCLASS(Blueprintable)
class ASF_API ARoomCluster : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle StartTimerHandle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFRecastNavMesh* RecastNavMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoomCluster OnRoomClusterRebuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoomCluster OnVisibleElementRebuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoomCluster OnTilesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoomCluster_int32 OnRoomAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomClusterAstar* RoomClusterAstar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BuiltAreaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDoneFirstGeneration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfluenceMapManager* InfluenceMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> PathPrecomputingFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<URoomClusterFilter>> DefaultClusterFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<GraphDynamicElementBP, FDynamicElementNavAreaClass> DynamicElementNavAreaClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavPolygon> VisibleAreaPolygons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNavigationReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URoomClusterFilter*, URoomClusterGraph*> RoomClusterGraph;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavAreaBase>> PriorityNavArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> DynamicElementsOwner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BuildId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProceduralMeshComponent*> ClusterMesh;
    
    ARoomCluster(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVisibleElement(FVector _WorldLocation, const UObject* _Querier);
    
    UFUNCTION(BlueprintCallable)
    void UnBindToRoom(int32 _RoomToUnBindID, FRoomHasModifie Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryStartRoomCluster(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TestGetGraphElementFromID(const UObject* WorldContextObject, int64 GraphID);
    
    UFUNCTION(BlueprintCallable)
    void SwapInfluenceMapMemory();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StressTest_Precomputed(const UObject* WorldContextObject, const FPrecomputedPath& OriginGraphID, const FPrecomputedPath& DestGraphID, int32 NbTest, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StressTest(const UObject* WorldContextObject, int64 OriginGraphID, int64 DestGraphID, int32 NbTest, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRoomCluster(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInfluenceMap(AInfluenceMapManager* _InfluenceMapManager);
    
    UFUNCTION(BlueprintCallable)
    void RebuildRoomClusters();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RebuildRoomByID(const UObject* WorldContextObject, int64 _RoomID);
    
    UFUNCTION(BlueprintCallable)
    bool RasterizeNavMeshTile(int32 _TileIdx);
    
    UFUNCTION(BlueprintCallable)
    bool NextRoom();
    
    UFUNCTION(BlueprintCallable)
    bool NextDynamicElement(GraphDynamicElementBP DynamicElementType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsThereNavigablePolygonInRadius(const UObject* WorldContextObject, FVector _WorldLocation, float _Radius, TSubclassOf<UNavigationQueryFilter> _Filter, const UObject* _Querier, const UObject* PolygonOwner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsRoomConnectedToRoom(const UObject* WorldContextObject, FVector _FirstRoomPos, TSubclassOf<URoomClusterFilter> _ClusterFilter, FVector _SecondRoomPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsRoomConnectedToGraphID(const UObject* WorldContextObject, FVector _RoomPos, TSubclassOf<URoomClusterFilter> _ClusterFilter, int64 _GraphID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationReady() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsInsideSameRoom(const UObject* WorldContextObject, FVector _FirstPos, FVector _SecondPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsInsideRoom(const UObject* WorldContextObject, FVector _WorldPos, int64 _RoomGraphID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGraphIDInsideRoom(const UObject* WorldContextObject, int32 _GraphID, int32 _RoomGraphID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGraphIDConnectedToGraphID(const UObject* WorldContextObject, int64 _FirstGraphID, TSubclassOf<URoomClusterFilter> _ClusterFilter, int64 _SecondGraphID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuilt() const;
    
    UFUNCTION(BlueprintCallable)
    bool InitRoomDisplayProperties(FVector WorldPos);
    
    UFUNCTION(BlueprintCallable)
    void InitRoomClusterProceduralMeshes(TSubclassOf<URoomClusterFilter> ClusterFilter);
    
    UFUNCTION(BlueprintCallable)
    bool InitRoomClusterDisplayByIndex(int32 ClusterIndex, TSubclassOf<URoomClusterFilter> ClusterFilter);
    
    UFUNCTION(BlueprintCallable)
    bool InitRoomClusterDisplay(FVector WorldPos, TSubclassOf<URoomClusterFilter> ClusterFilter);
    
    UFUNCTION(BlueprintCallable)
    bool InitGraphIDDisplay(int64 GraphID);
    
    UFUNCTION(BlueprintCallable)
    void InitDynamicElementDisplay(GraphDynamicElementBP DynamicElementType);
    
    UFUNCTION(BlueprintCallable)
    void GetVisiblePolygonsAtLocation(FVector _Origin, float _Radius, TArray<FPolygone>& _Polygones);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<int64> GetRoomsIDAtLocation(const UObject* WorldContextObject, FVector _WorldPos);
    
    UFUNCTION(BlueprintCallable)
    bool GetRoomNextPolygon(TArray<FVector>& Polygon);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<int32> GetRoomIDFromCluster(const UObject* WorldContextObject, FVector _ClusterLocation, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int64 GetRoomIDAtLocation(const UObject* WorldContextObject, FVector _WorldPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URoomGraph_RoomDynamicElement* GetRoomDynamicElement(const UObject* WorldContextObject, int64 _DynamicElementGraphID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetRoomClusterIdxForFilter(const UObject* WorldContextObject, FVector _RoomPos, TSubclassOf<URoomClusterFilter> _ClusterFilter, int32& _ClusterIdx);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URoomClusterGraph* GetRoomClusterGraph(const UObject* WorldContextObject, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARoomCluster* GetRoomCluster(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetReachableActorsForActor_RoomGraph(const UObject* WorldContextObject, AActor* _Actor, const TArray<AActor*>& _actors, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int64 GetRandomRoomIDInCluster(const UObject* WorldContextObject, FVector _WorldPosition, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetRandomPositionInGraphElement(const UObject* WorldContextObject, int64 _RoomGraphID, FVector& _OutPosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int64 GetRandomAuthorizedRoomIDInCluster(const UObject* WorldContextObject, FVector _WorldPosition, TSubclassOf<URoomClusterFilter> _ClusterFilter, const TArray<int64>& _AuthorizedGraphID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPositionInRadiusInGraphElement(const UObject* WorldContextObject, int64 _RoomGraphID, FVector Origin, float Radius, FVector& _OutPosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetPathPoints(const UObject* WorldContextObject, FRoomClusterPathResult RoomClusterPathResult, FPrecomputedPath_Points OriginPrecomputedPath_Points, FPrecomputedPath_Points DestPrecomputedPath_Points);
    
    UFUNCTION(BlueprintCallable)
    bool GetGraphIDPolygon(TArray<FVector>& Polygon);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UObject* GetGraphIDOwner(const UObject* WorldContextObject, int64 _GraphID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int64 GetGraphIDAtLocation(const UObject* WorldContextObject, FVector _WorldPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FPolygone> GetGraphElementGeometry(const UObject* WorldContextObject, int64 _GraphID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<int32> GetGraphElementConnectedID(const UObject* WorldContextObject, int32 _GraphID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<int32> GetEntranceConnectedRoomID(const UObject* WorldContextObject, int32 _EntranceID);
    
    UFUNCTION(BlueprintCallable)
    bool GetDynamicNextPolygon(TArray<FVector>& Polygon);
    
    UFUNCTION(BlueprintCallable)
    bool GetDynamicEdges(TArray<FSegment>& Edges);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URoomGraph_Cover* GetCoverFromPosition(const UObject* WorldContextObject, FVector _CoverPosition);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClusterNumber(TSubclassOf<URoomClusterFilter> ClusterFilter);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<URoomClusterFilter>> GetClusterClasses();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetAtLeastOneReachableActorForActors_RoomGraph(const UObject* WorldContextObject, AActor* _Actor, const TArray<AActor*>& _actors, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<int32> GetAllRoomEntranceID(const UObject* WorldContextObject, int32 _RoomID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UObject*> GetAllRoomEntrance(const UObject* WorldContextObject, int32 _RoomID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UObject*> GetAllClusterRoomEntrance(const UObject* WorldContextObject, int32 _RoomID, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable)
    void GenerateVisibleAreaPolygons();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GeneratePrecomputedPathPointForID(const UObject* WorldContextObject, int64 GraphID, FVector _WorldPos, FPrecomputedPath_Points& PrecomputedPath_Points);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GeneratePrecomputedPathForID(const UObject* WorldContextObject, int64 GraphID, FVector _WorldPos, FPrecomputedPath& PrecomputedPath);
    
    UFUNCTION(BlueprintCallable)
    void GenerateNavMeshInfluenceMapData();
    
    UFUNCTION(BlueprintCallable)
    void ClearRoomClusterDisplay();
    
    UFUNCTION(BlueprintCallable)
    void CallOnRoomClusterSet();
    
    UFUNCTION(BlueprintCallable)
    void BindToRoom(int32 _RoomToBindID, FRoomHasModifie Delegate);
    
};

