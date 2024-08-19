#pragma once
#include "CoreMinimal.h"
#include "AttackTargetProperties.generated.h"

class AActor;
class UAttack;

USTRUCT(BlueprintType)
struct ASF_API FAttackTargetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttack* Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float distanceToTarget;
    
    FAttackTargetProperties();
};

