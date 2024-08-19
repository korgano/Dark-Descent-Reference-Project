#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarineCustomization.h"
#include "DataCarrierCivilian.generated.h"

USTRUCT(BlueprintType)
struct FDataCarrierCivilian {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarineCustomization Customization;
    
    ASF_API FDataCarrierCivilian();
};

