#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimInstanceHumanoid.h"
#include "AnimInstanceHumanoidMelee.generated.h"

class AActor;
class UAnimSequenceBase;
class UAttackMontageDataAsset;

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstanceHumanoidMelee : public UAnimInstanceHumanoid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CharaAttacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackMontageDataAsset* DataAssetAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fDashTimeInAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstAttack;
    
public:
    UAnimInstanceHumanoidMelee();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDataAssetAttack(FGameplayTag AttackTag);
    
    UFUNCTION(BlueprintCallable)
    void LaunchAttack(AActor* ThingAttacked, FGameplayTag AttackTag);
    
};

