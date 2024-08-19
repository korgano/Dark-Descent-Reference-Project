#pragma once
#include "CoreMinimal.h"
#include "EOnslaughtType.h"
#include "GameplayAction.h"
#include "GAStartOnslaught.generated.h"

UCLASS(Blueprintable)
class ASF_API UGAStartOnslaught : public UGameplayAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnslaughtType OnslaughtType;
    
public:
    UGAStartOnslaught();

};

