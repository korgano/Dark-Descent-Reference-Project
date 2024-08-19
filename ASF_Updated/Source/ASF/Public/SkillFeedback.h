#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkillFeedback.generated.h"

class USkill;

UCLASS(Blueprintable)
class ASF_API ASkillFeedback : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill* InstigatorSkill;
    
public:
    ASkillFeedback(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveFeedback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(USkill* _InstigatorSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetInstigatorSkill();
    
};

