#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "DataMove.h"
#include "SquadAIActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USquadAIActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataMove SelectedActionDataMove;
    
public:
    USquadAIActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActionDataMove(FDataMove _DataMove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataMove GetActionDataMove() const;
    
};

