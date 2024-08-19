#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnumFragGrenadeMode.h"
#include "Skill_ShootAtLocation.h"
#include "Skill_GL_FragGrenade.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_GL_FragGrenade : public USkill_ShootAtLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumFragGrenadeMode FragGrenadeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AimingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasFired;
    
public:
    USkill_GL_FragGrenade();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnProjectile();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAimingFinished();
    
};

