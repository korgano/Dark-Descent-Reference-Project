#pragma once
#include "CoreMinimal.h"
#include "EOperationTypes.h"
#include "PlayFabResultCommon.h"
#include "ProfilesSetProfileLanguageResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FProfilesSetProfileLanguageResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOperationTypes OperationResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    FProfilesSetProfileLanguageResponse();
};

