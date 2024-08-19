#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetSegmentsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetSegmentsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentIds;
    
    FAdminGetSegmentsRequest();
};

