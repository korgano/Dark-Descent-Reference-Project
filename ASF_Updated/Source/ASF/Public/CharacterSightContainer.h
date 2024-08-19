#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterSightRange.h"
#include "CharacterSightContainer.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FCharacterSightContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EnumCharacterSightRange> Sights;
    
    FCharacterSightContainer();
};

