#pragma once
#include "CoreMinimal.h"
#include "AttributeAndName.generated.h"

class UTinda_Attribute;

USTRUCT(BlueprintType)
struct FAttributeAndName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* Attribute;
    
    ASF_API FAttributeAndName();
};

