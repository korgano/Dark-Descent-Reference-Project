#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "TriggerInfo.h"
#include "CharacterDeathTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UCharacterDeathTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UCharacterDeathTriggerInfo();

};

