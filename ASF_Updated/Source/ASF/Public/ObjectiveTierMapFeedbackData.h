#pragma once
#include "CoreMinimal.h"
#include "ObjectiveTierMapFeedbackData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FObjectiveTierMapFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TextureNavigationArrow;
    
    ASF_API FObjectiveTierMapFeedbackData();
};

