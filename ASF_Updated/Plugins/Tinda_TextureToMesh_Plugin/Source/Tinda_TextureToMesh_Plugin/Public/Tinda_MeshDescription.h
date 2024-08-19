#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tinda_MeshDescription.generated.h"

USTRUCT(BlueprintType)
struct FTinda_MeshDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertex;
    
    TINDA_TEXTURETOMESH_PLUGIN_API FTinda_MeshDescription();
};

