#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Event_ASFPlayerState_SquadDelegate.h"
#include "ASFPlayerState.generated.h"

class ASquad;
class ASquadDrone;
class UObject;

UCLASS(Blueprintable)
class ASF_API AASFPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquadDrone* SquadDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbAllies;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFPlayerState_Squad OnSquadCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFPlayerState_Squad OnSquadDroneCreated;
    
    AASFPlayerState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSquadDrone(ASquadDrone* _NewSquad);
    
    UFUNCTION(BlueprintCallable)
    void SetSquad(ASquad* _NewSquad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASquad* GetSquadWithoutContext(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASquadDrone* GetSquadDroneWithoutContext(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquadDrone* GetSquadDrone(bool _CreateIfNeeded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetSquad() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNewAllyID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASquad* CreateSquad();
    
};

