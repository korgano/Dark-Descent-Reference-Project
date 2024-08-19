#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdateUserTitleDisplayNameResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    FAdminUpdateUserTitleDisplayNameResult();
};

