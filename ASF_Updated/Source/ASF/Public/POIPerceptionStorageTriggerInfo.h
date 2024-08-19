#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TriggerInfo.h"
#include "POIPerceptionStorageTriggerInfo.generated.h"

class AActor;
class AMission;

UCLASS(Blueprintable)
class ASF_API UPOIPerceptionStorageTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPOIPerceptionStorageTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerPerceived(AMission* Mission, AActor* PerceiveGATrigger);
    
};

