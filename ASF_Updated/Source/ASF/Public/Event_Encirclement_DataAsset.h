#pragma once
#include "CoreMinimal.h"
#include "Event_EncHumanSpawn_DataAsset.h"
#include "Event_Encirclement_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_Encirclement_DataAsset : public UEvent_EncHumanSpawn_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSquadSize;
    
    UEvent_Encirclement_DataAsset();

};

