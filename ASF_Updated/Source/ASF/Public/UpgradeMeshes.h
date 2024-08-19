#pragma once
#include "CoreMinimal.h"
#include "UpgradeMesh.h"
#include "UpgradeMeshes.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpgradeMesh> Meshes;
    
    ASF_API FUpgradeMeshes();
};

