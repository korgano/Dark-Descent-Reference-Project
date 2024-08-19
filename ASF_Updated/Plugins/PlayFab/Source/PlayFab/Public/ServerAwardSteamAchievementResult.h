#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerAwardSteamAchievementResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerAwardSteamAchievementResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> AchievementResults;
    
    FServerAwardSteamAchievementResult();
};

