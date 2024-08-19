#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SpawnPoint_Esthetic_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USpawnPoint_Esthetic_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AnimArrowLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnArrowLocation;
    
    USpawnPoint_Esthetic_DataAsset();

};

