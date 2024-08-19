#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ASFRequirementsBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ASF_API UASFRequirementsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UASFRequirementsBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenPrivacyWebPage(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenEulaWebPage(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerNickname(const UObject* WorldContextObject);
    
};

