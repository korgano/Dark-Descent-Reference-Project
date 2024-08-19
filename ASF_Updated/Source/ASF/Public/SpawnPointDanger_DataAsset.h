#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpawnPointDanger_DataAsset.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable)
class ASF_API USpawnPointDanger_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPhysicalMaterial>> CreepPhysicalMaterials;
    
    USpawnPointDanger_DataAsset();

};

