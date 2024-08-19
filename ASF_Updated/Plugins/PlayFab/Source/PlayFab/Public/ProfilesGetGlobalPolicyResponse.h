#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ProfilesGetGlobalPolicyResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesGetGlobalPolicyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Permissions;
    
    FProfilesGetGlobalPolicyResponse();
};

