#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "EnumAcknowSpeaker.h"
#include "GameplayTwinReference.h"
#include "Templates/SubclassOf.h"
#include "AcknowWithSpeaker.generated.h"

class AActor;
class UAcknow_DataAsset;
class UInteractiveComponent;

USTRUCT(BlueprintType)
struct ASF_API FAcknowWithSpeaker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAcknow_DataAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAcknowSpeaker Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EmptyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference InteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName InteractionCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractiveComponent> InteractionClass;
    
    FAcknowWithSpeaker();
};

