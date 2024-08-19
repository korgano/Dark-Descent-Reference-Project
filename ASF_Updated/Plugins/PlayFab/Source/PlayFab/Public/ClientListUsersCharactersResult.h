#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientListUsersCharactersResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientListUsersCharactersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Characters;
    
    FClientListUsersCharactersResult();
};

