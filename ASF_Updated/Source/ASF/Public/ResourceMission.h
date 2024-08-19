#pragma once
#include "CoreMinimal.h"
#include "ResourceMission.generated.h"

class UResourceMission_DataAsset;

USTRUCT(BlueprintType)
struct FResourceMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceMission_DataAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailableDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    ASF_API FResourceMission();
};

