#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "GroupsListGroupInvitationsResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FGroupsListGroupInvitationsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Invitations;
    
    FGroupsListGroupInvitationsResponse();
};

