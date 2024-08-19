#pragma once
#include "CoreMinimal.h"
#include "GraphElement.h"
#include "GraphCluster.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FGraphCluster : public FGraphElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Rooms;
    
    FGraphCluster();
};

