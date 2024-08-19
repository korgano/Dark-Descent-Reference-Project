#pragma once
#include "CoreMinimal.h"
#include "GraphElement.h"
#include "GraphRoom.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FGraphRoom : public FGraphElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> GraphFilterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RoomEntranceId;
    
    FGraphRoom();
};

