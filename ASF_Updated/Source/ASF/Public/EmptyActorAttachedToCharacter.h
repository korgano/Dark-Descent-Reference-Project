#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterIDName.h"
#include "EmptyActorAttachedToCharacter.generated.h"

class AASFCharacter;
class AASFGameStateBase;

UCLASS(Blueprintable)
class ASF_API AEmptyActorAttachedToCharacter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    AEmptyActorAttachedToCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void BindEventToCharacter(AASFGameStateBase* _GameState, AASFCharacter* _Character);
    
};

