#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "ResourcesNeed.generated.h"

USTRUCT(BlueprintType)
struct FResourcesNeed : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> NeededResources;
    
    ASF_API FResourcesNeed();
};

