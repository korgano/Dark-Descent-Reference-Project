#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.generated.h"

class AGameplayTwinActor;

USTRUCT(BlueprintType)
struct FGameplayTwinReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayTwinActor* TwinReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReferencedTwinID;
    
    ASF_API FGameplayTwinReference();
};

