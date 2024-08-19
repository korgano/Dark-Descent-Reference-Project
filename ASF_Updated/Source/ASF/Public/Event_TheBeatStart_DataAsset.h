#pragma once
#include "CoreMinimal.h"
#include "Event_DataAsset.h"
#include "Event_TheBeatStart_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_TheBeatStart_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Trigger_NbAlienOnMap_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbAlienSpawn;
    
    UEvent_TheBeatStart_DataAsset();

};

