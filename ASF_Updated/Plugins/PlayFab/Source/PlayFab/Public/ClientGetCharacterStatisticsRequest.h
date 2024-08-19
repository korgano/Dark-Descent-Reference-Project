#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetCharacterStatisticsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetCharacterStatisticsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterId;
    
    FClientGetCharacterStatisticsRequest();
};

