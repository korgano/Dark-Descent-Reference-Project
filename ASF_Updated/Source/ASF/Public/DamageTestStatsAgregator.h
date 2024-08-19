#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageTestStatsAgregator.generated.h"

class AAlien;
class AHumanoid;
class ARangeWeapon;
class UDamageTestStat;

UCLASS(Blueprintable)
class ASF_API ADamageTestStatsAgregator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTestStat*> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveAllDuration;
    
    ADamageTestStatsAgregator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartTest();
    
    UFUNCTION(BlueprintCallable)
    UDamageTestStat* GetOrCreateDamageTestStat(int32 _Id);
    
    UFUNCTION(BlueprintCallable)
    void AddWeapon(ARangeWeapon* _Weapon, int32 _Id);
    
    UFUNCTION(BlueprintCallable)
    void AddHumanoid(AHumanoid* _Humanoid, int32 _Id);
    
    UFUNCTION(BlueprintCallable)
    void AddAlien(AAlien* _Alien, int32 _Id);
    
};

