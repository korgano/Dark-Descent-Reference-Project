#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "Breakable_Window.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ABreakable_Window : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    ABreakable_Window(const FObjectInitializer& ObjectInitializer);

};

