#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabUtilities.generated.h"

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabUtilities();

    UFUNCTION(BlueprintCallable)
    static void setPlayFabSettings(const FString& GameTitleId, const FString& PlayFabSecretApiKey, const FString& ProductionUrl, const FString& PhotonRealtimeAppId, const FString& PhotonTurnbasedAppId, const FString& PhotonChatAppId);
    
    UFUNCTION(BlueprintCallable)
    static FString getPhotonAppId(bool Realtime, bool Chat, bool Turnbased);
    
    UFUNCTION(BlueprintCallable)
    static FString getErrorText(int32 code);
    
};

