#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NarrativeFreezeGameplayAction.h"
#include "PlayerChoice.h"
#include "GA_PlayerChoice.generated.h"

UCLASS(Blueprintable)
class ASF_API UGA_PlayerChoice : public UNarrativeFreezeGameplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CallToAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> Datapads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerChoice> Choices;
    
    UGA_PlayerChoice();

};

