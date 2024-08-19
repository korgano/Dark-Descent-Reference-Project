#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUpdateUserTitleDisplayNameResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    FClientUpdateUserTitleDisplayNameResult();
};

