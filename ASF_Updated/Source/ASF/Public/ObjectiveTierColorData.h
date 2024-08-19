#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectiveTierColorData.generated.h"

USTRUCT(BlueprintType)
struct FObjectiveTierColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StandardColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FocusedColor;
    
    ASF_API FObjectiveTierColorData();
};

