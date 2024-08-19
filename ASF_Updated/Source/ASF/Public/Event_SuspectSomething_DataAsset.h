#pragma once
#include "CoreMinimal.h"
#include "Event_DataAsset.h"
#include "Event_SuspectSomething_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_SuspectSomething_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Trigger_NbAlienOnMap_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbAlienSpawn;
    
    UEvent_SuspectSomething_DataAsset();

};

