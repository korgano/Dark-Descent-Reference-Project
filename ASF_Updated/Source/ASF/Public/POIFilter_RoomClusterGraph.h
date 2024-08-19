#pragma once
#include "CoreMinimal.h"
#include "POIFilter.h"
#include "Templates/SubclassOf.h"
#include "POIFilter_RoomClusterGraph.generated.h"

class URoomClusterFilter;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_RoomClusterGraph : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> ClusterFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InverseCondition;
    
public:
    UPOIFilter_RoomClusterGraph();

};

