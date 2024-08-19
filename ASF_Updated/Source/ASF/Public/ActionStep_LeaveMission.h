#pragma once
#include "CoreMinimal.h"
#include "ActionStep_Activity.h"
#include "ActionStep_LeaveMission.generated.h"

UCLASS(Blueprintable)
class ASF_API UActionStep_LeaveMission : public UActionStep_Activity {
    GENERATED_BODY()
public:
    UActionStep_LeaveMission();

};

