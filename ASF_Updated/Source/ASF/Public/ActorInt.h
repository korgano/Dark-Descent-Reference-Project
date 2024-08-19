#pragma once
#include "CoreMinimal.h"
#include "ActorInt.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ASF_API FActorInt();
};

