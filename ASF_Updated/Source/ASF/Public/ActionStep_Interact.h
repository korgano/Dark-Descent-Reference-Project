#pragma once
#include "CoreMinimal.h"
#include "ActionStep_Activity.h"
#include "ActionStep_Interact.generated.h"

UCLASS(Blueprintable)
class ASF_API UActionStep_Interact : public UActionStep_Activity {
    GENERATED_BODY()
public:
    UActionStep_Interact();

};

