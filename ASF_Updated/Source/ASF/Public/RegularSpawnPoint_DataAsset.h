#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPoint_Esthetic_DataAsset.h"
#include "RegularSpawnPoint_DataAsset.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ASF_API URegularSpawnPoint_DataAsset : public USpawnPoint_Esthetic_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshTransform;
    
    URegularSpawnPoint_DataAsset();

};

