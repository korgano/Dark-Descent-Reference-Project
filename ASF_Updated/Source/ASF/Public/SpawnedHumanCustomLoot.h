#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterIDName.h"
#include "LootableItem.h"
#include "SpawnedHumanCustomLoot.generated.h"

USTRUCT(BlueprintType)
struct FSpawnedHumanCustomLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> DeterminedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootableItem> RandomItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SpecialItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToFindNothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CorpseCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSearchInteractionActive;
    
    ASF_API FSpawnedHumanCustomLoot();
};

