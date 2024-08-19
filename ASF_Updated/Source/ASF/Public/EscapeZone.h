#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "Event_EscapeZone_HumanoidMarineDelegate.h"
#include "Event_EscapeZone_SquadDelegate.h"
#include "EscapeZone.generated.h"

class AASFPlayerState;
class AHumanoidMarine;
class ASquad;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AEscapeZone : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EscapeZone_HumanoidMarine OnSquadMemberEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EscapeZone_HumanoidMarine OnSquadMemberLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EscapeZone_Squad OnSquadFullyInZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EscapeZone_Squad OnSquadNoMoreFullyInZone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSquadCreated;
    
public:
    AEscapeZone(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberRemovedFromSquad(ASquad* _Squad, AHumanoidMarine* _Member);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberAddedToSquad(ASquad* _Squad, AHumanoidMarine* _Member);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
};

