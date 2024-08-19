#pragma once
#include "CoreMinimal.h"
#include "Event_Rush_DataAsset.h"
#include "Event_TheyArePissed_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_TheyArePissed_DataAsset : public UEvent_Rush_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Trigger_NbAlienOnMap_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbAlienSpawn;
    
    UEvent_TheyArePissed_DataAsset();

};

