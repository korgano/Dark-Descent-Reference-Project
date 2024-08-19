#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "GameplayAction.h"
#include "GAActorTagModifier.generated.h"

UCLASS(Blueprintable)
class ASF_API UGAActorTagModifier : public UGameplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorTagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorTagsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> CharacterIDNames;
    
    UGAActorTagModifier();

};

