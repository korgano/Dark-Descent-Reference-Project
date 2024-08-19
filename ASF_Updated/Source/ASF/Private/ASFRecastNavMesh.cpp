#include "ASFRecastNavMesh.h"
#include "Templates/SubclassOf.h"

AASFRecastNavMesh::AASFRecastNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomCluster = NULL;
    this->FOWManager = NULL;
}

void AASFRecastNavMesh::SplitNavMeshInRoom(FVector Origin, const FVector Extent, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const UObject* Querier) {
}

UObject* AASFRecastNavMesh::SearchDynamicElementOnPath(UNavigationPath* _NavPath, FNavNodeRefCarrier _NavNodeRefCarrier, GraphDynamicElementBP DynamicElementType, int32 _SearchingDepth) {
    return NULL;
}

UObject* AASFRecastNavMesh::SearchAnyDynamicElementOnPath(UNavigationPath* _NavPath, FNavNodeRefCarrier _NavNodeRefCarrier, const TArray<GraphDynamicElementBP>& IgnoredElement, GraphDynamicElementBP& DynamicElementType, int32& DynamicElementDepth, int32 _SearchingDepth) {
    return NULL;
}

void AASFRecastNavMesh::GetPolyFlagAtLocation(FVector _WorldPos, bool& _Room, bool& _Dynamic, bool& _Duplicated) {
}

TArray<int32> AASFRecastNavMesh::GetGraphIDInNavigableRadius(const FVector Origin, float Radius, GraphDynamicElementBP DynamicElementType, TSubclassOf<UNavigationQueryFilter> FilterClass, UObject* Querier) {
    return TArray<int32>();
}

bool AASFRecastNavMesh::GetDynamicElementPathIndex(UNavigationPath* _NavPath, int32 _PathIndex, GraphDynamicElementBP DynamicElementType, int32& startIdx, int32& EndIdx) {
    return false;
}

AASFRecastNavMesh* AASFRecastNavMesh::GetASFRecastNavMesh() {
    return NULL;
}

void AASFRecastNavMesh::ColliderNavAreaSoftUpdate_AllShape(const TArray<UShapeComponent*>& _Collider, TSubclassOf<UNavArea> _NewNavArea) {
}

void AASFRecastNavMesh::ColliderNavAreaSoftUpdate(const TArray<UBoxComponent*>& _Collider, TSubclassOf<UNavArea> _NewNavArea) {
}

void AASFRecastNavMesh::AddInvalidateTile(FVector _WorldPos) {
}


