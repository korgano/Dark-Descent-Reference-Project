#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerBanUsersResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerBanUsersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BanData;
    
    FServerBanUsersResult();
};

