#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ProfilesGetEntityProfilesResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesGetEntityProfilesResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Profiles;
    
    FProfilesGetEntityProfilesResponse();
};

