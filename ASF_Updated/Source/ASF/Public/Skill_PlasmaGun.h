#pragma once
#include "CoreMinimal.h"
#include "Skill.h"
#include "Skill_PlasmaGun.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_PlasmaGun : public USkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasFired;
    
    USkill_PlasmaGun();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAimingFinished();
    
};

