#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarineCustomTattoo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMarineCustomTattoo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BodyPartTags;
    
    ASF_API FMarineCustomTattoo();
};

