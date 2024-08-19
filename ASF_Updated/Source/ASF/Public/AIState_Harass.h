#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AIState.h"
#include "Templates/SubclassOf.h"
#include "AIState_Harass.generated.h"

class UAttack;
class UAttackComponent;
class URoomClusterFilter;

UCLASS(Blueprintable)
class ASF_API UAIState_Harass : public UAIState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledAttackNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> DisableDurationForTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> DisableAttackNumberForTag;
    
public:
    UAIState_Harass();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackEnded(UAttackComponent* AttackComponent, UAttack* UsedAttack);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetVisibleBoundPositions(TSubclassOf<URoomClusterFilter> _PositionValidationClusterFilter, const TArray<int64>& _RefusedGraphID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetSortedVisibleBoundPositions(TSubclassOf<URoomClusterFilter> _PositionValidationClusterFilter, const TArray<int64>& _RefusedGraphID);
    
    UFUNCTION(BlueprintCallable)
    void DisableHarassByTag(FGameplayTag DisablingTag);
    
};

