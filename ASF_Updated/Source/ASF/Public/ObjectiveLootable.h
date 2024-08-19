#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "ObjectiveLootable.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Abstract, Blueprintable)
class ASF_API AObjectiveLootable : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsSuccessfullyLooted;
    
public:
    AObjectiveLootable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLooting(bool SuccessfullyLooted);
    
    UFUNCTION(BlueprintCallable)
    void StartLooting();
    
    UFUNCTION(BlueprintCallable)
    void SetIsLootable(bool IsLootable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToClosedAfterLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_EffectHandlerComponent* GetEffectHandler() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close(bool SuccessfullyLooted);
    
};

