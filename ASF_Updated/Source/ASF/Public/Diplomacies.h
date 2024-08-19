#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Diplomacy.h"
#include "Diplomacies.generated.h"

USTRUCT(BlueprintType)
struct FDiplomacies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TeamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiplomacy> Politics;
    
    ASF_API FDiplomacies();
};

