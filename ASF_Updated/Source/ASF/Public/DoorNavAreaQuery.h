#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "DoorNavAreaQuery.generated.h"

class UNavAreaBase;

USTRUCT(BlueprintType)
struct FDoorNavAreaQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> NavArea;
    
    ASF_API FDoorNavAreaQuery();
};

