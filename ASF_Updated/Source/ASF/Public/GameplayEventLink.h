#pragma once
#include "CoreMinimal.h"
#include "GameplayEventLink.generated.h"

class AGameplayEvent;

USTRUCT(BlueprintType)
struct FGameplayEventLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameplayEvent*> LinkedEvents;
    
    ASF_API FGameplayEventLink();
};

