#pragma once
#include "CoreMinimal.h"
#include "CharacterSightProperties.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FCharacterSightProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightAngle;
    
    FCharacterSightProperties();
};

