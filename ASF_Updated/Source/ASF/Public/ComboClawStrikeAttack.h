#pragma once
#include "CoreMinimal.h"
#include "Attack.h"
#include "ComboClawStrikeAttack.generated.h"

UCLASS(Blueprintable)
class ASF_API UComboClawStrikeAttack : public UAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashBackFailAcceptance;
    
    UComboClawStrikeAttack();

};

