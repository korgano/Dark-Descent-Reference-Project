#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminBanUsersResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminBanUsersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BanData;
    
    FAdminBanUsersResult();
};

