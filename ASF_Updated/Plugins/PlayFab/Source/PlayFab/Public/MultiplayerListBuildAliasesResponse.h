#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerListBuildAliasesResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerListBuildAliasesResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BuildAliases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkipToken;
    
    FMultiplayerListBuildAliasesResponse();
};

