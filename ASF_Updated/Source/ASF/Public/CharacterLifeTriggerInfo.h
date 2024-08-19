#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "DamageResultStruct.h"
#include "TriggerInfo.h"
#include "CharacterLifeTriggerInfo.generated.h"

class AASFCharacter;
class AASFGameStateBase;
class AActor;

UCLASS(Blueprintable)
class ASF_API UCharacterLifeTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* CharacterTrigger;
    
public:
    UCharacterLifeTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLifeChange(AActor* ActorWounded, const FDamageResultStruct& Damage);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToCharacter(AASFGameStateBase* GameState, AActor* Actor);
    
};

