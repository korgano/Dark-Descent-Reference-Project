#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StressDamage.generated.h"

USTRUCT(BlueprintType)
struct FStressDamage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBravery;
    
    ASF_API FStressDamage();
};

