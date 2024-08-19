#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "LocalizationGetLanguageListRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FLocalizationGetLanguageListRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    FLocalizationGetLanguageListRequest();
};

