#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdateSegmentResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdateSegmentResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentId;
    
    FAdminUpdateSegmentResponse();
};

