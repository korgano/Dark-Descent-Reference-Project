#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueParticipantDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASF_API UDialogueParticipantDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Portrait;
    
    UDialogueParticipantDataAsset();

};

