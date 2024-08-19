#pragma once
#include "CoreMinimal.h"
#include "SquadActionStruct.generated.h"

class AHumanoid;
class UAction;

USTRUCT(BlueprintType)
struct FSquadActionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Humanoid;
    
    ASF_API FSquadActionStruct();
};

