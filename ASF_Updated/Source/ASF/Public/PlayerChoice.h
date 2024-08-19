#pragma once
#include "CoreMinimal.h"
#include "PlayerChoice.generated.h"

USTRUCT(BlueprintType)
struct FPlayerChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChoiceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameplayEventName;
    
    ASF_API FPlayerChoice();
};

