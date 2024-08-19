#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AssetCollection_DataAsset.generated.h"

class AStaticAssembly;
class UStaticMesh;

UCLASS(Blueprintable)
class ASF_API UAssetCollection_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> MeshesCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AStaticAssembly>> StaticAssemblyCollection;
    
    UAssetCollection_DataAsset();

    UFUNCTION(BlueprintCallable)
    void GetRandomAsset(TSoftObjectPtr<UStaticMesh>& MeshPtr, TSoftClassPtr<AStaticAssembly>& StaticAssemblyPtr, bool& bIsMesh);
    
};

