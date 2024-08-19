#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ErrorTagContairers.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FErrorTagContairers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FGameplayTagContainer> ErrorTagContairersMap;
    
    ASF_API FErrorTagContairers();
};

