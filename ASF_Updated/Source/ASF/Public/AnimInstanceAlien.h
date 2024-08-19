#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AnimInstanceCharacter.h"
#include "EnumAlienAnimPhase.h"
#include "EnumAlienClass.h"
#include "EnumAlienLocomotionOwner.h"
#include "EnumFacehuggerAnimPhase.h"
#include "AnimInstanceAlien.generated.h"

class AASFCharacter;
class AActor;
class ASpawnPoint;
class UObject;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstanceAlien : public UAnimInstanceCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienAnimPhase AnimPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienLocomotionOwner LocomotionOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienClass AlienClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* AbductedMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInAbductingMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AbductedMarineSpineLocation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumFacehuggerAnimPhase AnimPhaseFH;
    
    UAnimInstanceAlien();

    UFUNCTION(BlueprintCallable)
    void TickGrabHand(float fDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickAbductRun(float fDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAbducting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartChargeImpact(FVector Location, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void StartAbducting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnFromEgg(AActor* Egg);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLocomotionOwner(EnumAlienLocomotionOwner NewLocomotionOwner, UObject* OwnerObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimPhase(EnumAlienAnimPhase NewAnimPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySpawnPoint(ASpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnAbductRange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
};

