#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminAddNewsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminAddNewsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewsId;
    
    FAdminAddNewsResult();
};

