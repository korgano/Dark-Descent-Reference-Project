#pragma once
#include "CoreMinimal.h"
#include "Event_DataAsset.h"
#include "Event_OnOurTracks_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_OnOurTracks_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Trigger_NbAlienOnMap_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbAlienSpawn;
    
    UEvent_OnOurTracks_DataAsset();

};

