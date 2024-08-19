#pragma once
#include "CoreMinimal.h"
#include "ASFCharacter.h"
#include "Event_AEggDelegate.h"
#include "Templates/SubclassOf.h"
#include "Egg.generated.h"

class AActor;
class AAlien;
class ANest;
class UAIPerceptionListenerComponent;
class UCharacterDataAsset;
class UEggTargetingComponent;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable)
class ASF_API AEgg : public AASFCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANest* Nest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEggTargetingComponent* EnemyTargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEggTargetingComponent> EnemyTargetingComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasStartOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAlien> AlienClassToSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AEgg OnEggOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionListenerComponent* AIPerceptionListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> Spawning_NavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterToEggPool;
    
public:
    AEgg(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterFromEggPool();
    
public:
    UFUNCTION(BlueprintCallable)
    void TryAddingToNest();
    
    UFUNCTION(BlueprintCallable)
    void SetNest(ANest* _Nest);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemovePerception();
    
    UFUNCTION(BlueprintCallable)
    void RegisterToEggPool();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpeningEgg(AActor* _SeenTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenEgg();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectSelected(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchDelayOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegisteredToEggPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoRegisterToEggPool();
    
};

