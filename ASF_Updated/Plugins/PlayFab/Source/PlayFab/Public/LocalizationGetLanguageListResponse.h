#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "LocalizationGetLanguageListResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLocalizationGetLanguageListResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageList;
    
    FLocalizationGetLanguageListResponse();
};

