#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECodexEntryGrouping.h"
#include "CodexCategory.generated.h"

class UDataTable;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCodexCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECodexEntryGrouping Grouping;
    
    ASF_API FCodexCategory();
};

