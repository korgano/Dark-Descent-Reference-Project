#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGrantItemsToUsersResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGrantItemsToUsersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> ItemGrantResults;
    
    FAdminGrantItemsToUsersResult();
};

