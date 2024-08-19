#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "XpGain.generated.h"

USTRUCT(BlueprintType)
struct FXpGain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Xp;
    
    ASF_API FXpGain();
};

