#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerModifyItemUsesResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerModifyItemUsesResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingUses;
    
    FServerModifyItemUsesResult();
};

