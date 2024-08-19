#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminCreateSegmentResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCreateSegmentResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SegmentId;
    
    FAdminCreateSegmentResponse();
};

