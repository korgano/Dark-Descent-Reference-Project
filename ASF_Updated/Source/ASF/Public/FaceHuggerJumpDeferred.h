#pragma once
#include "CoreMinimal.h"
#include "AttackDeffered.h"
#include "DamageStruct.h"
#include "FaceHuggerJumpDeferred.generated.h"

UCLASS(Blueprintable)
class ASF_API UFaceHuggerJumpDeferred : public UAttackDeffered {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageStruct Damage;
    
public:
    UFaceHuggerJumpDeferred();

};

