#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CharacterIDName.h"
#include "ActorWithCharacterIDInterface.generated.h"

class AASFGameStateBase;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UActorWithCharacterIDInterface : public UInterface {
    GENERATED_BODY()
};

class IActorWithCharacterIDInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    void SetCharacterIdName(UObject* WorldContextObject, const FCharacterIDName& _CharacterIDName, bool _DeferredSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FCharacterIDName GetCharacterIdName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastActorWithCharacterIDNameSpawned(AASFGameStateBase* _GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastActorWithCharacterIDNameEndPlay(AASFGameStateBase* _GameState);
    
};

