#pragma once
#include "CoreMinimal.h"
#include "Modifier.h"
#include "EffectModifier.generated.h"

class UTinda_Effect;

USTRUCT(BlueprintType)
struct FEffectModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModifier Modifier;
    
    TINDA_EFFECTPLUGIN_API FEffectModifier();
};

