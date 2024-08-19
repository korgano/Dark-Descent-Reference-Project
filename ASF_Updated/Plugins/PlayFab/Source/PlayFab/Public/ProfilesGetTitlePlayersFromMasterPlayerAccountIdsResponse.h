#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* TitlePlayerAccounts;
    
    FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
};

