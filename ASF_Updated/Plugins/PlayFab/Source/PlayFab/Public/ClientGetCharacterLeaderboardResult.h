#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetCharacterLeaderboardResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetCharacterLeaderboardResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Leaderboard;
    
    FClientGetCharacterLeaderboardResult();
};

