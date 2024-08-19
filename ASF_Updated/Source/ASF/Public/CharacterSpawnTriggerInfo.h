#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "TriggerInfo.h"
#include "CharacterSpawnTriggerInfo.generated.h"

class AASFGameStateBase;
class AActor;

UCLASS(Blueprintable)
class ASF_API UCharacterSpawnTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
public:
    UCharacterSpawnTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void BindEventToActor(AASFGameStateBase* _GameState, AActor* _Actor);
    
};

