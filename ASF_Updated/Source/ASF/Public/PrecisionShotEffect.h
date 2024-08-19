#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Tinda_Effect.h"
#include "PrecisionShotEffect.generated.h"

UCLASS(Blueprintable)
class ASF_API UPrecisionShotEffect : public UTinda_Effect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrecisionShotTagChanceModifier;
    
    UPrecisionShotEffect();

};

