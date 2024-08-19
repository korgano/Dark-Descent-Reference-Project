#pragma once
#include "CoreMinimal.h"
#include "Attack.h"
#include "DamageStruct.h"
#include "AttackFaceHuggerJump.generated.h"

UCLASS(Blueprintable)
class ASF_API UAttackFaceHuggerJump : public UAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageStruct Damage;
    
public:
    UAttackFaceHuggerJump();

};

