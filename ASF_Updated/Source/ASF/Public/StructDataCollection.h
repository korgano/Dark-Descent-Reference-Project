#pragma once
#include "CoreMinimal.h"
#include "StructDataCollection.generated.h"

USTRUCT(BlueprintType)
struct FStructDataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdate;
    
    ASF_API FStructDataCollection();
};

