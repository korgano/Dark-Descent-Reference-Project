#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MarineListItem.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API UMarineListItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Marine;
    
    UMarineListItem();

};

