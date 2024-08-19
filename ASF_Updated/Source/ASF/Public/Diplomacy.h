#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EDiplomacy.h"
#include "Diplomacy.generated.h"

USTRUCT(BlueprintType)
struct FDiplomacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TeamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiplomacy Diplomacy;
    
    ASF_API FDiplomacy();
};

