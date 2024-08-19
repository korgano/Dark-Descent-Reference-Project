#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DamageResultStruct.h"
#include "DamageStruct.h"
#include "DamageTestStat.generated.h"

class AASFCharacter;
class AWeapon;

UCLASS(Blueprintable)
class ASF_API UDamageTestStat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbLegHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbArmHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbTorsoHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbHeadHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbScratch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbLightWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbHeavyWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SumDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AllDuration;
    
    UDamageTestStat();

    UFUNCTION(BlueprintCallable)
    void StartTest(bool _bSaveAllDuration);
    
    UFUNCTION(BlueprintCallable)
    void HumanoidKilled(AASFCharacter* _Humanoid, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStandardDeviation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentTorso() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentScratch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentMiss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentLightWound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentLeg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentHeavyWound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentHead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentDeath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentArm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAverageDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void DamageResult(AWeapon* _Weapon, bool _bResult, const FDamageStruct& _DamageStruct, const FDamageResultStruct& _DamageResultStruct);
    
    UFUNCTION(BlueprintCallable)
    void AlienKilled(AASFCharacter* _Alien, const FDamageResultStruct& _DamageResult);
    
};

