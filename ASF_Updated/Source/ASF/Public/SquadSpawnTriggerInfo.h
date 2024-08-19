#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "TriggerInfo.h"
#include "SquadSpawnTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API USquadSpawnTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName SquadIDName;
    
    USquadSpawnTriggerInfo();

};

