#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeleteSegmentsResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteSegmentsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    FAdminDeleteSegmentsResponse();
};

