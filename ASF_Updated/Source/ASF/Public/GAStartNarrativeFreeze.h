#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "NarrativeFreezeGameplayAction.h"
#include "GAStartNarrativeFreeze.generated.h"

UCLASS(Blueprintable)
class ASF_API UGAStartNarrativeFreeze : public UNarrativeFreezeGameplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> ExcludedCharacterIDNames;
    
    UGAStartNarrativeFreeze();

};

