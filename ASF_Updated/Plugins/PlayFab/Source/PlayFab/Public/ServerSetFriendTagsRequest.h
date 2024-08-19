#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerSetFriendTagsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetFriendTagsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendPlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tags;
    
    FServerSetFriendTagsRequest();
};

