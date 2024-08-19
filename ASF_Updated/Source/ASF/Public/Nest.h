#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_NestDelegate.h"
#include "Nest.generated.h"

class AASFCharacter;
class AEgg;

UCLASS(Blueprintable)
class ASF_API ANest : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeHatchedByHatchingEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEgg*> Eggs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEgg*> LivingEggs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEgg*> DestroyedEggs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Nest OnNestIsAttacked;
    
    ANest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OpenNestEggs();
    
    UFUNCTION(BlueprintCallable)
    void OnEggOpen(AEgg* _egg);
    
    UFUNCTION(BlueprintCallable)
    void OnEggDeath(AASFCharacter* _egg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNestDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyNest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeHatchedByHatchingEvent() const;
    
    UFUNCTION(BlueprintCallable)
    void AddKillTheNestEffect();
    
    UFUNCTION(BlueprintCallable)
    void AddEgg(AEgg* _egg);
    
};

