#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerListUsersCharactersResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerListUsersCharactersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Characters;
    
    FServerListUsersCharactersResult();
};

