#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetUserBansResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetUserBansResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BanData;
    
    FAdminGetUserBansResult();
};

