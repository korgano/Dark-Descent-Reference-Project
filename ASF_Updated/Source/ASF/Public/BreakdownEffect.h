#pragma once
#include "CoreMinimal.h"
#include "Tinda_Effect.h"
#include "EnumBreakdown.h"
#include "BreakdownEffect.generated.h"

UCLASS(Blueprintable)
class ASF_API UBreakdownEffect : public UTinda_Effect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumBreakdown ForceBreakdownType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsANewBreakdown;
    
    UBreakdownEffect();

};

