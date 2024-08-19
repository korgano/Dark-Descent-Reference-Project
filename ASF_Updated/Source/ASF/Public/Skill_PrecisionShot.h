#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "Skill.h"
#include "Skill_PrecisionShot.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API USkill_PrecisionShot : public USkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedToAim;
    
public:
    USkill_PrecisionShot();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAimingFinished(AActor* _Target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamageResultStruct GetKillDamageResult(AActor* _Target);
    
};

