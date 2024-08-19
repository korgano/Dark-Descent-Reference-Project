#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeleteSegmentRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteSegmentRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentId;
    
    FAdminDeleteSegmentRequest();
};

