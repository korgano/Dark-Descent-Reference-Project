#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "Mine.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AMine : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    AMine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Log_Explosion(const FString& _Log);
    
};

