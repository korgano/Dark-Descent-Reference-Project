#pragma once
#include "CoreMinimal.h"
#include "Tinda_Effect.h"
#include "DamageResultStruct.h"
#include "EnumActionStatus.h"
#include "Templates/SubclassOf.h"
#include "OverwatchEffect.generated.h"

class AActor;
class UAIActionComponent;
class UAction;
class UDirective;

UCLASS(Blueprintable)
class ASF_API UOverwatchEffect : public UTinda_Effect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDirective> _DirectiveStopClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAction* CurrentAction;
    
public:
    UOverwatchEffect();

private:
    UFUNCTION(BlueprintCallable)
    void OnDirectiveStop(UDirective* Directive);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageReceived(AActor* ActorWounded, const FDamageResultStruct& Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnAIActionAdded(UAIActionComponent* UAIActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActionEnded(UAction* Action, EnumActionStatus ActionStatus);
    
};

