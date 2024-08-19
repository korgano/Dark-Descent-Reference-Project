#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActionStep_Move.h"
#include "ActionStep_Move_Follow.generated.h"

UCLASS(Blueprintable)
class ASF_API UActionStep_Move_Follow : public UActionStep_Move {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NextUpdateHandler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDist;
    
    UActionStep_Move_Follow();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateMove();
    
};

