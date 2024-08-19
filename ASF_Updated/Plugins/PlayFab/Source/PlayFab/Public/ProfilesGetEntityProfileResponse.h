#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ProfilesGetEntityProfileResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesGetEntityProfileResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Profile;
    
    FProfilesGetEntityProfileResponse();
};

