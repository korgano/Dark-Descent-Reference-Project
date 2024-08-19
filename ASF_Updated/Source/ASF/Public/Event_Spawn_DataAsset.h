#pragma once
#include "CoreMinimal.h"
#include "EnumSpawnPickRule.h"
#include "Event_DataAsset.h"
#include "Event_Spawn_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_Spawn_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumSpawnPickRule SpawnPickRule;
    
    UEvent_Spawn_DataAsset();

};

