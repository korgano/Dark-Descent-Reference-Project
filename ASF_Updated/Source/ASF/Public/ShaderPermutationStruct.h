#pragma once
#include "CoreMinimal.h"
#include "ShaderPermutationStruct.generated.h"

class UMaterial;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FShaderPermutationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> BaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> MaterialsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParamsOrder;
    
    ASF_API FShaderPermutationStruct();
};

