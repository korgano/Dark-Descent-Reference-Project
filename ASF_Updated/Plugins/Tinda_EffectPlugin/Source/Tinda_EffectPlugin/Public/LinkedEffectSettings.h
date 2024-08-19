#pragma once
#include "CoreMinimal.h"
#include "EnumLinkEffect_LinkRule.h"
#include "Templates/SubclassOf.h"
#include "LinkedEffectSettings.generated.h"

class UTinda_Effect;

USTRUCT(BlueprintType)
struct FLinkedEffectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTinda_Effect> EffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumLinkEffect_LinkRule LinkRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* Effect;
    
    TINDA_EFFECTPLUGIN_API FLinkedEffectSettings();
};

