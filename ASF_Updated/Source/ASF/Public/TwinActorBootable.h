#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TwinActorBootable.generated.h"

class AGameplayTwinActor;
class UActorComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UTwinActorBootable : public UInterface {
    GENERATED_BODY()
};

class ITwinActorBootable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransferDataToTwinComponent(UActorComponent* CopiedActorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BootWithTwinActor(AGameplayTwinActor* TwinActor);
    
};

