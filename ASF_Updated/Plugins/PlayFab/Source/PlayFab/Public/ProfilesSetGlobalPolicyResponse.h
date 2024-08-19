#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ProfilesSetGlobalPolicyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesSetGlobalPolicyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FProfilesSetGlobalPolicyResponse();
};

