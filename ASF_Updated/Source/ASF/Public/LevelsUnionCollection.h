#pragma once
#include "CoreMinimal.h"
#include "LevelsUnion.h"
#include "LevelsUnionCollection.generated.h"

USTRUCT(BlueprintType)
struct FLevelsUnionCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelsUnion> LevelsUnionsCollection;
    
    ASF_API FLevelsUnionCollection();
};

