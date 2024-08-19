#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CommonAttribute.generated.h"

class UMarineAttributeDataAssets;

USTRUCT(BlueprintType)
struct FCommonAttribute : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMarineAttributeDataAssets* Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExcludingTrait;
    
    ASF_API FCommonAttribute();
};

