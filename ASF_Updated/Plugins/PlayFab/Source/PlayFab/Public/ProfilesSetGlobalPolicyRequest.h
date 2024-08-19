#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ProfilesSetGlobalPolicyRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesSetGlobalPolicyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Permissions;
    
    FProfilesSetGlobalPolicyRequest();
};

