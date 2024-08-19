#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayFabAuthenticationContext.generated.h"

UCLASS(Blueprintable)
class PLAYFABCOMMON_API UPlayFabAuthenticationContext : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientSessionTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntityToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeveloperSecretKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
public:
    UPlayFabAuthenticationContext();

    UFUNCTION(BlueprintCallable)
    void SetPlayFabId(const FString& InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityToken(const FString& InToken);
    
    UFUNCTION(BlueprintCallable)
    void SetDeveloperSecretKey(const FString& InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetClientSessionTicket(const FString& InTicket);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayFabId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEntityToken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDeveloperSecretKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetClientSessionTicket();
    
    UFUNCTION(BlueprintCallable)
    void ForgetAllCredentials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClientAdminSecurityCheck() const;
    
};

