#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NewTurnEvent_Medbay.generated.h"

USTRUCT(BlueprintType)
struct FNewTurnEvent_Medbay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Wound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProsthesisRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingTurns;
    
    ASF_API FNewTurnEvent_Medbay();
};

