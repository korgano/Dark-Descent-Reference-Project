#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavMesh/RecastNavMesh.h"
#include "GraphDynamicElementBP.h"
#include "NavNodeRefCarrier.h"
#include "Templates/SubclassOf.h"
#include "ASFRecastNavMesh.generated.h"

class AASFRecastNavMesh;
class AFOWRevertedManagerActor;
class ANavigationData;
class ARoomCluster;
class UBoxComponent;
class UNavArea;
class UNavigationPath;
class UNavigationQueryFilter;
class UObject;
class UShapeComponent;

UCLASS(Blueprintable)
class ASF_API AASFRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomCluster* RoomCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFOWRevertedManagerActor* FOWManager;
    
    AASFRecastNavMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SplitNavMeshInRoom(FVector Origin, const FVector Extent, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const UObject* Querier);
    
    UFUNCTION(BlueprintCallable)
    UObject* SearchDynamicElementOnPath(UNavigationPath* _NavPath, FNavNodeRefCarrier _NavNodeRefCarrier, GraphDynamicElementBP DynamicElementType, int32 _SearchingDepth);
    
    UFUNCTION(BlueprintCallable)
    UObject* SearchAnyDynamicElementOnPath(UNavigationPath* _NavPath, FNavNodeRefCarrier _NavNodeRefCarrier, const TArray<GraphDynamicElementBP>& IgnoredElement, GraphDynamicElementBP& DynamicElementType, int32& DynamicElementDepth, int32 _SearchingDepth);
    
    UFUNCTION(BlueprintCallable)
    void GetPolyFlagAtLocation(FVector _WorldPos, bool& _Room, bool& _Dynamic, bool& _Duplicated);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetGraphIDInNavigableRadius(const FVector Origin, float Radius, GraphDynamicElementBP DynamicElementType, TSubclassOf<UNavigationQueryFilter> FilterClass, UObject* Querier);
    
    UFUNCTION(BlueprintCallable)
    bool GetDynamicElementPathIndex(UNavigationPath* _NavPath, int32 _PathIndex, GraphDynamicElementBP DynamicElementType, int32& startIdx, int32& EndIdx);
    
    UFUNCTION(BlueprintCallable)
    static AASFRecastNavMesh* GetASFRecastNavMesh();
    
    UFUNCTION(BlueprintCallable)
    void ColliderNavAreaSoftUpdate_AllShape(const TArray<UShapeComponent*>& _Collider, TSubclassOf<UNavArea> _NewNavArea);
    
    UFUNCTION(BlueprintCallable)
    void ColliderNavAreaSoftUpdate(const TArray<UBoxComponent*>& _Collider, TSubclassOf<UNavArea> _NewNavArea);
    
    UFUNCTION(BlueprintCallable)
    void AddInvalidateTile(FVector _WorldPos);
    
};

