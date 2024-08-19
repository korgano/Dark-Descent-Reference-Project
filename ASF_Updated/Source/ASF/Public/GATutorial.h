#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAction.h"
#include "GATutorial.generated.h"

UCLASS(Blueprintable)
class ASF_API UGATutorial : public UGameplayAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CodexEntriesToUnlock;
    
public:
    UGATutorial();

};

