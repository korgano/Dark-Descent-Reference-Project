#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "TriggerInfo.h"
#include "OpenEggTriggerInfo.generated.h"

class AEgg;

UCLASS(Blueprintable)
class ASF_API UOpenEggTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference EggReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEgg* EggRef;
    
    UOpenEggTriggerInfo();

};

