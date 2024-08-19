#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterIDName.h"
#include "TriggerInfo.h"
#include "POIPerceptionUpdatedTriggerInfo.generated.h"

class AASFCharacter;
class AASFGameStateBase;
class UAI_POIPerceptionComponent;
class UPOIDefaultContainer;

UCLASS(Blueprintable)
class ASF_API UPOIPerceptionUpdatedTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PerceptionUpdateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* CharacterTrigger;
    
public:
    UPOIPerceptionUpdatedTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(UAI_POIPerceptionComponent* _PerceptionComp, UPOIDefaultContainer* _PerceptionResult, FGameplayTag _PerceptionTag);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToCharacter(AASFGameStateBase* _GameState, AASFCharacter* _Character);
    
};

