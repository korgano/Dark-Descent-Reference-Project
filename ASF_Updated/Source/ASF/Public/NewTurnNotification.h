#pragma once
#include "CoreMinimal.h"
#include "ENewTurnNotificationType.h"
#include "NewTurnNotification.generated.h"

USTRUCT(BlueprintType)
struct FNewTurnNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENewTurnNotificationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    ASF_API FNewTurnNotification();
};

