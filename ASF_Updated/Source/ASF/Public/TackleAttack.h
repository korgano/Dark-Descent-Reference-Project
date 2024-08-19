#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Attack.h"
#include "TackleAttack.generated.h"

UCLASS(Blueprintable)
class ASF_API UTackleAttack : public UAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlideDestination;
    
    UTackleAttack();

};

