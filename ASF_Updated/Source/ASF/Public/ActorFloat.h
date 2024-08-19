#pragma once
#include "CoreMinimal.h"
#include "ActorFloat.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    ASF_API FActorFloat();
};

