#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterIDName.h"
#include "BossData.generated.h"

class AAlien;

USTRUCT(BlueprintType)
struct FBossData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerAggressivenessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BossTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName BossID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAlien* Boss;
    
    ASF_API FBossData();
};

