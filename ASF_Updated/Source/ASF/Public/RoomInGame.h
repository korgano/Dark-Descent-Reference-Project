#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "RoomInGame.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ARoomInGame : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandler;
    
    ARoomInGame(const FObjectInitializer& ObjectInitializer);

};

