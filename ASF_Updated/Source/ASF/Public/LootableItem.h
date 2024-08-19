#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LootableItem.generated.h"

USTRUCT(BlueprintType)
struct FLootableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    ASF_API FLootableItem();
};

