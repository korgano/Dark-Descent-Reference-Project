#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemCapacity;
    
    ASF_API FInventoryItem();
};

