#pragma once
#include "CoreMinimal.h"
#include "GraphElement.h"
#include "GraphDynamic.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ASF_API FGraphDynamic : public FGraphElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ConnectedElementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ConnectedEntranceDist;
    
    FGraphDynamic();
};

