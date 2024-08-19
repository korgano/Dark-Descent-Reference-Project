#pragma once
#include "CoreMinimal.h"
#include "RegularSpawnPoint_DataAsset.h"
#include "CorridorSpawnPoint_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCorridorSpawnPoint_DataAsset : public URegularSpawnPoint_DataAsset {
    GENERATED_BODY()
public:
    UCorridorSpawnPoint_DataAsset();

};

