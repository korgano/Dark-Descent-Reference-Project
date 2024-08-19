#include "RoomCluster.h"
#include "Templates/SubclassOf.h"

ARoomCluster::ARoomCluster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RecastNavMesh = NULL;
    this->RoomClusterAstar = NULL;
    this->BuiltAreaValue = 0;
    this->bHasDoneFirstGeneration = false;
    this->InfluenceMapManager = NULL;
    this->PathPrecomputingFilter = NULL;
    this->bIsNavigationReady = false;
    this->BuildId = 0;
}

void ARoomCluster::UpdateVisibleElement(FVector _WorldLocation, const UObject* _Querier) {
}

void ARoomCluster::UnBindToRoom(int32 _RoomToUnBindID, FRoomHasModifie Delegate) {
}

void ARoomCluster::TryStartRoomCluster(ANavigationData* NavData) {
}

void ARoomCluster::TestGetGraphElementFromID(const UObject* WorldContextObject, int64 GraphID) {
}

void ARoomCluster::SwapInfluenceMapMemory() {
}

void ARoomCluster::StressTest_Precomputed(const UObject* WorldContextObject, const FPrecomputedPath& OriginGraphID, const FPrecomputedPath& DestGraphID, int32 NbTest, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
}

void ARoomCluster::StressTest(const UObject* WorldContextObject, int64 OriginGraphID, int64 DestGraphID, int32 NbTest, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
}

void ARoomCluster::StartRoomCluster_Implementation(ANavigationData* NavData) {
}

void ARoomCluster::SetInfluenceMap(AInfluenceMapManager* _InfluenceMapManager) {
}

void ARoomCluster::RebuildRoomClusters() {
}

void ARoomCluster::RebuildRoomByID(const UObject* WorldContextObject, int64 _RoomID) {
}

bool ARoomCluster::RasterizeNavMeshTile(int32 _TileIdx) {
    return false;
}

bool ARoomCluster::NextRoom() {
    return false;
}

bool ARoomCluster::NextDynamicElement(GraphDynamicElementBP DynamicElementType) {
    return false;
}

bool ARoomCluster::IsThereNavigablePolygonInRadius(const UObject* WorldContextObject, FVector _WorldLocation, float _Radius, TSubclassOf<UNavigationQueryFilter> _Filter, const UObject* _Querier, const UObject* PolygonOwner) {
    return false;
}

bool ARoomCluster::IsRoomConnectedToRoom(const UObject* WorldContextObject, FVector _FirstRoomPos, TSubclassOf<URoomClusterFilter> _ClusterFilter, FVector _SecondRoomPos) {
    return false;
}

bool ARoomCluster::IsRoomConnectedToGraphID(const UObject* WorldContextObject, FVector _RoomPos, TSubclassOf<URoomClusterFilter> _ClusterFilter, int64 _GraphID) {
    return false;
}

bool ARoomCluster::IsNavigationReady() const {
    return false;
}

bool ARoomCluster::IsInsideSameRoom(const UObject* WorldContextObject, FVector _FirstPos, FVector _SecondPos) {
    return false;
}

bool ARoomCluster::IsInsideRoom(const UObject* WorldContextObject, FVector _WorldPos, int64 _RoomGraphID) {
    return false;
}

bool ARoomCluster::IsGraphIDInsideRoom(const UObject* WorldContextObject, int32 _GraphID, int32 _RoomGraphID) {
    return false;
}

bool ARoomCluster::IsGraphIDConnectedToGraphID(const UObject* WorldContextObject, int64 _FirstGraphID, TSubclassOf<URoomClusterFilter> _ClusterFilter, int64 _SecondGraphID) {
    return false;
}

bool ARoomCluster::IsBuilt() const {
    return false;
}

bool ARoomCluster::InitRoomDisplayProperties(FVector WorldPos) {
    return false;
}

void ARoomCluster::InitRoomClusterProceduralMeshes(TSubclassOf<URoomClusterFilter> ClusterFilter) {
}

bool ARoomCluster::InitRoomClusterDisplayByIndex(int32 ClusterIndex, TSubclassOf<URoomClusterFilter> ClusterFilter) {
    return false;
}

bool ARoomCluster::InitRoomClusterDisplay(FVector WorldPos, TSubclassOf<URoomClusterFilter> ClusterFilter) {
    return false;
}

bool ARoomCluster::InitGraphIDDisplay(int64 GraphID) {
    return false;
}

void ARoomCluster::InitDynamicElementDisplay(GraphDynamicElementBP DynamicElementType) {
}

void ARoomCluster::GetVisiblePolygonsAtLocation(FVector _Origin, float _Radius, TArray<FPolygone>& _Polygones) {
}

TArray<int64> ARoomCluster::GetRoomsIDAtLocation(const UObject* WorldContextObject, FVector _WorldPos) {
    return TArray<int64>();
}

bool ARoomCluster::GetRoomNextPolygon(TArray<FVector>& Polygon) {
    return false;
}

TArray<int32> ARoomCluster::GetRoomIDFromCluster(const UObject* WorldContextObject, FVector _ClusterLocation, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return TArray<int32>();
}

int64 ARoomCluster::GetRoomIDAtLocation(const UObject* WorldContextObject, FVector _WorldPos) {
    return 0;
}

URoomGraph_RoomDynamicElement* ARoomCluster::GetRoomDynamicElement(const UObject* WorldContextObject, int64 _DynamicElementGraphID) {
    return NULL;
}

bool ARoomCluster::GetRoomClusterIdxForFilter(const UObject* WorldContextObject, FVector _RoomPos, TSubclassOf<URoomClusterFilter> _ClusterFilter, int32& _ClusterIdx) {
    return false;
}

URoomClusterGraph* ARoomCluster::GetRoomClusterGraph(const UObject* WorldContextObject, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return NULL;
}

ARoomCluster* ARoomCluster::GetRoomCluster(const UObject* WorldContextObject) {
    return NULL;
}

TArray<AActor*> ARoomCluster::GetReachableActorsForActor_RoomGraph(const UObject* WorldContextObject, AActor* _Actor, const TArray<AActor*>& _actors, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return TArray<AActor*>();
}

int64 ARoomCluster::GetRandomRoomIDInCluster(const UObject* WorldContextObject, FVector _WorldPosition, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return 0;
}

bool ARoomCluster::GetRandomPositionInGraphElement(const UObject* WorldContextObject, int64 _RoomGraphID, FVector& _OutPosition) {
    return false;
}

int64 ARoomCluster::GetRandomAuthorizedRoomIDInCluster(const UObject* WorldContextObject, FVector _WorldPosition, TSubclassOf<URoomClusterFilter> _ClusterFilter, const TArray<int64>& _AuthorizedGraphID) {
    return 0;
}

bool ARoomCluster::GetPositionInRadiusInGraphElement(const UObject* WorldContextObject, int64 _RoomGraphID, FVector Origin, float Radius, FVector& _OutPosition) {
    return false;
}

TArray<FVector> ARoomCluster::GetPathPoints(const UObject* WorldContextObject, FRoomClusterPathResult RoomClusterPathResult, FPrecomputedPath_Points OriginPrecomputedPath_Points, FPrecomputedPath_Points DestPrecomputedPath_Points) {
    return TArray<FVector>();
}

bool ARoomCluster::GetGraphIDPolygon(TArray<FVector>& Polygon) {
    return false;
}

UObject* ARoomCluster::GetGraphIDOwner(const UObject* WorldContextObject, int64 _GraphID) {
    return NULL;
}

int64 ARoomCluster::GetGraphIDAtLocation(const UObject* WorldContextObject, FVector _WorldPos) {
    return 0;
}

TArray<FPolygone> ARoomCluster::GetGraphElementGeometry(const UObject* WorldContextObject, int64 _GraphID) {
    return TArray<FPolygone>();
}

TArray<int32> ARoomCluster::GetGraphElementConnectedID(const UObject* WorldContextObject, int32 _GraphID) {
    return TArray<int32>();
}

TArray<int32> ARoomCluster::GetEntranceConnectedRoomID(const UObject* WorldContextObject, int32 _EntranceID) {
    return TArray<int32>();
}

bool ARoomCluster::GetDynamicNextPolygon(TArray<FVector>& Polygon) {
    return false;
}

bool ARoomCluster::GetDynamicEdges(TArray<FSegment>& Edges) {
    return false;
}

URoomGraph_Cover* ARoomCluster::GetCoverFromPosition(const UObject* WorldContextObject, FVector _CoverPosition) {
    return NULL;
}

int32 ARoomCluster::GetClusterNumber(TSubclassOf<URoomClusterFilter> ClusterFilter) {
    return 0;
}

TArray<TSubclassOf<URoomClusterFilter>> ARoomCluster::GetClusterClasses() {
    return TArray<TSubclassOf<URoomClusterFilter>>();
}

AActor* ARoomCluster::GetAtLeastOneReachableActorForActors_RoomGraph(const UObject* WorldContextObject, AActor* _Actor, const TArray<AActor*>& _actors, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return NULL;
}

TArray<int32> ARoomCluster::GetAllRoomEntranceID(const UObject* WorldContextObject, int32 _RoomID) {
    return TArray<int32>();
}

TArray<UObject*> ARoomCluster::GetAllRoomEntrance(const UObject* WorldContextObject, int32 _RoomID) {
    return TArray<UObject*>();
}

TArray<UObject*> ARoomCluster::GetAllClusterRoomEntrance(const UObject* WorldContextObject, int32 _RoomID, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return TArray<UObject*>();
}

void ARoomCluster::GenerateVisibleAreaPolygons() {
}

bool ARoomCluster::GeneratePrecomputedPathPointForID(const UObject* WorldContextObject, int64 GraphID, FVector _WorldPos, FPrecomputedPath_Points& PrecomputedPath_Points) {
    return false;
}

bool ARoomCluster::GeneratePrecomputedPathForID(const UObject* WorldContextObject, int64 GraphID, FVector _WorldPos, FPrecomputedPath& PrecomputedPath) {
    return false;
}

void ARoomCluster::GenerateNavMeshInfluenceMapData() {
}

void ARoomCluster::ClearRoomClusterDisplay() {
}

void ARoomCluster::CallOnRoomClusterSet() {
}

void ARoomCluster::BindToRoom(int32 _RoomToBindID, FRoomHasModifie Delegate) {
}


