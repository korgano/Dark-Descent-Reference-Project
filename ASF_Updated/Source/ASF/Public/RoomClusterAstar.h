#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PrecomputedPath.h"
#include "RoomClusterPathResult.h"
#include "Templates/SubclassOf.h"
#include "RoomClusterAstar.generated.h"

class AActor;
class URoomClusterFilter;
class URoomGraphPathPrecomputComponent;

UCLASS(Blueprintable)
class ASF_API URoomClusterAstar : public UObject {
    GENERATED_BODY()
public:
    URoomClusterAstar();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TMap<URoomGraphPathPrecomputComponent*, FRoomClusterPathResult> MultiFindPathToLocationSynchronously_Precomputed2(const UObject* WorldContextObject, const FPrecomputedPath& OriginGraph, const TArray<URoomGraphPathPrecomputComponent*>& _PrecomputedLocations, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TMap<AActor*, FRoomClusterPathResult> MultiFindPathToLocationSynchronously_Precomputed(const UObject* WorldContextObject, const FPrecomputedPath& OriginGraph, const TArray<AActor*>& _Locations, TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindPathToLocationSynchronously_Precomputed(const UObject* WorldContextObject, FPrecomputedPath OriginGraph, FPrecomputedPath DestGraph, TSubclassOf<URoomClusterFilter> _ClusterFilter, FRoomClusterPathResult& PathResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindPathToLocationSynchronously(const UObject* WorldContextObject, int64 OriginGraphID, int64 DestGraphID, TSubclassOf<URoomClusterFilter> _ClusterFilter, FRoomClusterPathResult& PathResult);
    
};

