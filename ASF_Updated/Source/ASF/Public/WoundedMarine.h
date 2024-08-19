#pragma once
#include "CoreMinimal.h"
#include "WoundedMarine.generated.h"

USTRUCT(BlueprintType)
struct FWoundedMarine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecoveryTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhysiciansAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProsthesisNeeded;
    
    ASF_API FWoundedMarine();
};

