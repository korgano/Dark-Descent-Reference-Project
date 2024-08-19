#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GraphCluster.h"
#include "GraphRoom.h"
#include "RoomClusterGraph.generated.h"

class ARoomCluster;
class URoomClusterFilter;

UCLASS(Blueprintable)
class ASF_API URoomClusterGraph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomCluster* RoomCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGraphCluster> RoomGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomClusterFilter* ClusterFilter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ClusterFilterID;
    
    URoomClusterGraph();

    UFUNCTION(BlueprintCallable)
    void ClearRoomGraph();
    
    UFUNCTION(BlueprintCallable)
    void BuildRoomGraph(TArray<FGraphRoom>& GraphRooms);
    
};

