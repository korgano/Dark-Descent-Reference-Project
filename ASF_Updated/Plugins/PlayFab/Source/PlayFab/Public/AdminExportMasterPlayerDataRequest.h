#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminExportMasterPlayerDataRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminExportMasterPlayerDataRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FAdminExportMasterPlayerDataRequest();
};

