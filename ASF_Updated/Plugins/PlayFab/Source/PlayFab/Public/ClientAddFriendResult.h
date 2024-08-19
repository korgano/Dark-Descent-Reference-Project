#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAddFriendResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAddFriendResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Created;
    
    FClientAddFriendResult();
};

