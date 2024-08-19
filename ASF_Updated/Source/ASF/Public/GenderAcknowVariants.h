#pragma once
#include "CoreMinimal.h"
#include "AcknowVariants.h"
#include "EGender.h"
#include "GenderAcknowVariants.generated.h"

USTRUCT(BlueprintType)
struct FGenderAcknowVariants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGender, FAcknowVariants> GenderVariants;
    
    ASF_API FGenderAcknowVariants();
};

