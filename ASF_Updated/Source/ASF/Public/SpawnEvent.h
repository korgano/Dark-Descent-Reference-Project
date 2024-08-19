#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TMEvent.h"
#include "SpawnEvent.generated.h"

class UFactionSystemic;

UCLASS(Abstract, Blueprintable)
class ASF_API USpawnEvent : public UTMEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFactionSystemic* Systemic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CalculatedBudget;
    
public:
    USpawnEvent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCalculatedBudget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalculateBudget();
    
};

