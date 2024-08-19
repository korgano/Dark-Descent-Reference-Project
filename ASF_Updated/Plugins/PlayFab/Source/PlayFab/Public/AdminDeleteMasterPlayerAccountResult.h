#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeleteMasterPlayerAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteMasterPlayerAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JobReceiptId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleIds;
    
    FAdminDeleteMasterPlayerAccountResult();
};

