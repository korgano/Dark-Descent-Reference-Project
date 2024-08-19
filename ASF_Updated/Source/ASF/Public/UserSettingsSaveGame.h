#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "UserSettingValue.h"
#include "UserSettingsSaveGame.generated.h"

UCLASS(Blueprintable)
class ASF_API UUserSettingsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserSettingValue> UserSettingValues;
    
    UUserSettingsSaveGame();

};

