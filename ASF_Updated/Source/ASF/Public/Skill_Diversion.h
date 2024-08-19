#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Skill.h"
#include "Skill_Diversion.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_Diversion : public USkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasThrown;
    
public:
    USkill_Diversion();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnProjectile();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetProjectileThrown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetLocation(FVector _StartLocation);
    
};

