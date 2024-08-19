#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "GroupsListGroupApplicationsRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FGroupsListGroupApplicationsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Group;
    
    FGroupsListGroupApplicationsRequest();
};

