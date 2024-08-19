#pragma once
#include "CoreMinimal.h"
#include "RoomClusterPathResult.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FRoomClusterPathResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> PathGraphElements;
    
    FRoomClusterPathResult();
};

