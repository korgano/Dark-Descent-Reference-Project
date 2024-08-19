#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "TriggerInfo.h"
#include "AmbushTriggerInfo.generated.h"

class AAmbushSpawnPoint;

UCLASS(Blueprintable)
class ASF_API UAmbushTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference AmbushReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAmbushSpawnPoint* AmbushRef;
    
    UAmbushTriggerInfo();

};

