#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventEffectLogicalOperator.h"
#include "EnumAcknowSpeaker.h"
#include "OtagoEventEffectCollection.h"
#include "OtagoEventOption.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FOtagoEventOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAcknowSpeaker Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOtagoEventEffectLogicalOperator EffectOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventEffectCollection> Effects;
    
    FOtagoEventOption();
};

