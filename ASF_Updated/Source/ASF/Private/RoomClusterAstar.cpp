#include "RoomClusterAstar.h"
#include "Templates/SubclassOf.h"

URoomClusterAstar::URoomClusterAstar() {
}

TMap<URoomGraphPathPrecomputComponent*, FRoomClusterPathResult> URoomClusterAstar::MultiFindPathToLocationSynchronously_Precomputed2(const UObject* WorldContextObject, const FPrecomputedPath& OriginGraph, const TArray<URoomGraphPathPrecomputComponent*>& _PrecomputedLocations, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return TMap<URoomGraphPathPrecomputComponent*, FRoomClusterPathResult>();
}

TMap<AActor*, FRoomClusterPathResult> URoomClusterAstar::MultiFindPathToLocationSynchronously_Precomputed(const UObject* WorldContextObject, const FPrecomputedPath& OriginGraph, const TArray<AActor*>& _Locations, TSubclassOf<URoomClusterFilter> _ClusterFilter) {
    return TMap<AActor*, FRoomClusterPathResult>();
}

bool URoomClusterAstar::FindPathToLocationSynchronously_Precomputed(const UObject* WorldContextObject, FPrecomputedPath OriginGraph, FPrecomputedPath DestGraph, TSubclassOf<URoomClusterFilter> _ClusterFilter, FRoomClusterPathResult& PathResult) {
    return false;
}

bool URoomClusterAstar::FindPathToLocationSynchronously(const UObject* WorldContextObject, int64 OriginGraphID, int64 DestGraphID, TSubclassOf<URoomClusterFilter> _ClusterFilter, FRoomClusterPathResult& PathResult) {
    return false;
}


