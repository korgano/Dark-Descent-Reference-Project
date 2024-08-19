#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SubLevelConnectorInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class USubLevelConnectorInterface : public UInterface {
    GENERATED_BODY()
};

class ISubLevelConnectorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConnectorSelected(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetCharacterInConnector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConnectorHasSameTransformAsConnectorName(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallConnector(const FString& _ConnectorName);
    
};

