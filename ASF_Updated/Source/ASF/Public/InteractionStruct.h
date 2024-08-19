#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionStruct.generated.h"

class AActor;
class UInteractiveComponent;

USTRUCT(BlueprintType)
struct FInteractionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* InteractiveComponent;
    
    ASF_API FInteractionStruct();
};

