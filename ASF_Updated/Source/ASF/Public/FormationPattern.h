#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FormationPattern.generated.h"

USTRUCT(BlueprintType)
struct FFormationPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Positions;
    
    ASF_API FFormationPattern();
};

