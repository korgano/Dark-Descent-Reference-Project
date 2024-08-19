#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_SquadMember_SquadDelegate.h"
#include "SquadMember.generated.h"

class ASquad;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USquadMember : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SquadMember_Squad OnAddedToSquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SquadMember_Squad OnRemovedFromSquad;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
public:
    USquadMember(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSquad(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetSquad();
    
};

