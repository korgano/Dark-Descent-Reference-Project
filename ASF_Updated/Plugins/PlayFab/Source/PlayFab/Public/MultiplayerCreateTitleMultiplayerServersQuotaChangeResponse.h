#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasApproved;
    
    FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse();
};

