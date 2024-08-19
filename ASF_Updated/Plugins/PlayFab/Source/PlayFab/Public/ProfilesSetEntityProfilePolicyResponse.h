#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ProfilesSetEntityProfilePolicyResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesSetEntityProfilePolicyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Permissions;
    
    FProfilesSetEntityProfilePolicyResponse();
};

