#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAction.h"
#include "GATriggerDTuto.generated.h"

UCLASS(Blueprintable)
class ASF_API UGATriggerDTuto : public UGameplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DTutorialTag;
    
    UGATriggerDTuto();

};

