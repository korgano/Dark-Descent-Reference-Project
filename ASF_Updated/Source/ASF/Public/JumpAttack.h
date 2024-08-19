#pragma once
#include "CoreMinimal.h"
#include "Attack.h"
#include "JumpAttack.generated.h"

class UAnimationComponent;

UCLASS(Blueprintable)
class ASF_API UJumpAttack : public UAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistance;
    
    UJumpAttack();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartJump(UAnimationComponent* AnimationComponent);
    
};

