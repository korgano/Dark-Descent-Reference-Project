#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDroneCombatStance.h"
#include "ETacticalDroneState.h"
#include "Event_SquadDrone_DroneCombatStanceChangedDelegate.h"
#include "Event_SquadDrone_StateChangedDelegate.h"
#include "Squad.h"
#include "SquadDrone.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASF_API ASquadDrone : public ASquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ETacticalDroneState SquadDroneState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SquadDrone_StateChanged Event_SquadDrone_StateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EDroneCombatStance DroneCombatStance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SquadDrone_DroneCombatStanceChanged Event_SquadDrone_DroneCombatStanceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NavigationalArrow_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor NavigationalArrow_Color;
    
    ASquadDrone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDroneMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetSquadDroneState(ETacticalDroneState _NewSquadDroneState);
    
    UFUNCTION(BlueprintCallable)
    void SetDroneCombatStance(EDroneCombatStance _DroneCombatStance);
    
};

