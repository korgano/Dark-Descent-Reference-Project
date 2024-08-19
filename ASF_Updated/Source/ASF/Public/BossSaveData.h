#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterIDName.h"
#include "BossSaveData.generated.h"

USTRUCT(BlueprintType)
struct FBossSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerAggressivenessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BossTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName BossID;
    
    ASF_API FBossSaveData();
};

