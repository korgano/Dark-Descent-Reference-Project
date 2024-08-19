#pragma once
#include "CoreMinimal.h"
#include "RoomClusterDisplayProperties.generated.h"

class URoomClusterFilter;

USTRUCT(BlueprintType)
struct ASF_API FRoomClusterDisplayProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ClusterID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RoomIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomClusterFilter* ClusterFilter;
    
    FRoomClusterDisplayProperties();
};

