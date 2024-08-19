#pragma once
#include "CoreMinimal.h"
#include "ASFCharacter.h"
#include "Rat.generated.h"

UCLASS(Blueprintable)
class ASF_API ARat : public AASFCharacter {
    GENERATED_BODY()
public:
    ARat(const FObjectInitializer& ObjectInitializer);

};

