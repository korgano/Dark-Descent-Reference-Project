#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "ActorWithCharacterIDInterface.h"
#include "CharacterIDName.h"
#include "ItemSpawned.generated.h"

class UDynamiqueSaveLoadComponent;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AItemSpawned : public AActorWithGameplayTag, public IActorWithCharacterIDInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamiqueSaveLoadComponent* DynamicSaveLoadComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 InPowerLoaderId;
    
    AItemSpawned(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

