#pragma once
#include "CoreMinimal.h"
#include "ActionStep_Move.h"
#include "ActionStep_MoveFormation.generated.h"

UCLASS(Blueprintable)
class ASF_API UActionStep_MoveFormation : public UActionStep_Move {
    GENERATED_BODY()
public:
    UActionStep_MoveFormation();

};

