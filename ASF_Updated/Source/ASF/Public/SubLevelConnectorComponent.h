#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Event_SubLevelConnectorComponent_FStringDelegate.h"
#include "SubLevelConnectorComponentStruct.h"
#include "TwinActorBootable.h"
#include "SubLevelConnectorComponent.generated.h"

class AActor;
class USubLevelConnectorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USubLevelConnectorComponent : public UActorComponent, public ITwinActorBootable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSubLevelConnectorComponentStruct> ConnectorPossibilities;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelConnectorComponent_FString OnConnectorAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelConnectorComponent_FString OnConnectorRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelConnectorComponent_FString OnConnectorUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelConnectorComponent_FString OnConnectorArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelConnectorComponent_FString OnConnectorClosingDoor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubLevelConnectorComponent_FString OnConnectorDeparture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> HiddenSublevels;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
public:
    USubLevelConnectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FTransform UpdateConnectorTransform(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable)
    void UpdateConnectorSubLevelName(const FString& _ConnectorName, const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void TwinActor_OnConnectorDeparture(USubLevelConnectorComponent* _Comp, const FString& _Connector);
    
    UFUNCTION(BlueprintCallable)
    void TwinActor_OnConnectorClosingDoor(USubLevelConnectorComponent* _Comp, const FString& _Connector);
    
    UFUNCTION(BlueprintCallable)
    void TwinActor_OnConnectorArrived(USubLevelConnectorComponent* _Comp, const FString& _Connector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SublevelIsHidden(const FString& SubLevelName) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveConnector(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectorTransitionEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectorSelected(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentConnector() const;
    
    UFUNCTION(BlueprintCallable)
    FSubLevelConnectorComponentStruct GetConnector_ByTransform(FTransform _Transform);
    
    UFUNCTION(BlueprintCallable)
    FSubLevelConnectorComponentStruct GetConnector_BySubLevelName(const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    FSubLevelConnectorComponentStruct GetConnector(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetCharacterInConnector() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllConnectorsName();
    
    UFUNCTION(BlueprintCallable)
    int32 FindConnectorBySubLevelName(const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    int32 FindConnector(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConnectorDeparture(bool _bIsCalled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConnectorClosingDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConnectorArrival(const FString& _NewConnector, bool _bIsCalled);
    
    UFUNCTION(BlueprintCallable)
    bool CanCallConnector(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable)
    void CallConnector(const FString& _ConnectorName);
    
    UFUNCTION(BlueprintCallable)
    void AddConnectorPossibility(const FString& _ConnectorName);
    

    // Fix for true pure virtual functions not being implemented
};

