#pragma once
#include "CoreMinimal.h"
#include "EnumAiEnemyMarineState.h"
#include "FactionSystemic.h"
#include "HumanSystemic.generated.h"

class ASquad;
class UMarineClassDataAssets;
class USquadClassDataAsset;

UCLASS(Blueprintable)
class ASF_API UHumanSystemic : public UFactionSystemic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASquad> SquadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USquadClassDataAsset* SquadClassDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiEnemyMarineState DefaultSquadBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMarineClassDataAssets*> HumanClassesForNextSquad;
    
public:
    UHumanSystemic();

    UFUNCTION(BlueprintCallable)
    void GetHumanPDAGroupForBudget(int32 _Budget, TArray<UMarineClassDataAssets*>& OutHumanPDAGroup);
    
};

