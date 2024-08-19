#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Event_Spawn_DataAsset.h"
#include "Event_FixedSpawn_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_FixedSpawn_DataAsset : public UEvent_Spawn_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BudgetBounds;
    
    UEvent_FixedSpawn_DataAsset();

};

