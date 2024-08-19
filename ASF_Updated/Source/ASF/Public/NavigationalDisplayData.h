#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumNavigationFeedbackType.h"
#include "NavigationalDisplayData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FNavigationalDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumNavigationFeedbackType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    ASF_API FNavigationalDisplayData();
};

