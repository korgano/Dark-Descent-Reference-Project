#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRevokeAllBansForUserResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRevokeAllBansForUserResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BanData;
    
    FServerRevokeAllBansForUserResult();
};

