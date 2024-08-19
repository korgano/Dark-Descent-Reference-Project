#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "MineField.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AMineField : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    AMineField(const FObjectInitializer& ObjectInitializer);

};

