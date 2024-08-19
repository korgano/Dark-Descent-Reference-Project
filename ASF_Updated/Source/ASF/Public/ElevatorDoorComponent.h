#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TwinActorBootable.h"
#include "ElevatorDoorComponent.generated.h"

class AGameplayTwinActor;
class USubLevelConnectorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UElevatorDoorComponent : public UActorComponent, public ITwinActorBootable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayTwinActor* LinkedSubLevelConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubLevelName;
    
    UElevatorDoorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnConnectorDeparture_Event(USubLevelConnectorComponent* _SubLevelConnector, const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectorArrived_Event(USubLevelConnectorComponent* _SubLevelConnector, const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable)
    void InitElevatorDoorComponent();
    

    // Fix for true pure virtual functions not being implemented
};

