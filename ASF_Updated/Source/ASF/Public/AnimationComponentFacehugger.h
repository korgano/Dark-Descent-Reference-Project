#pragma once
#include "CoreMinimal.h"
#include "AnimationComponentAlien.h"
#include "Event_AnimComp_HumanoidDelegate.h"
#include "AnimationComponentFacehugger.generated.h"

class AHumanoid;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAnimationComponentFacehugger : public UAnimationComponentAlien {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimComp_Humanoid OnAttackHumanoid;
    
    UAnimationComponentFacehugger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AttackHumanoid(AHumanoid* Humanoid);
    
};

