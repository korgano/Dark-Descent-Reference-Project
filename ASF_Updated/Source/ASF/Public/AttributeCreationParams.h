#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ObjectPropertyReadParams.h"
#include "AttributeCreationParams.generated.h"

USTRUCT(BlueprintType)
struct FAttributeCreationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AttributeAdditionalTagPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectPropertyReadParams BaseValueParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectPropertyReadParams MinValueParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectPropertyReadParams MaxValueParams;
    
    ASF_API FAttributeCreationParams();
};

