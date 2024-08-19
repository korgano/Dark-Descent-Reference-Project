#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Event_Spawn_DataAsset.h"
#include "Event_EncHumanSpawn_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_EncHumanSpawn_DataAsset : public UEvent_Spawn_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector2D> BudgetBoundsPerHiveSize;
    
    UEvent_EncHumanSpawn_DataAsset();

};

