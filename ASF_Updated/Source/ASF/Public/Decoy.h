#pragma once
#include "CoreMinimal.h"
#include "ASFCharacter.h"
#include "Decoy.generated.h"

class UCharacterDataAsset;
class UCombatComponent;

UCLASS(Blueprintable)
class ASF_API ADecoy : public AASFCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDataAsset* DataAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponent* CombatComponent;
    
    ADecoy(const FObjectInitializer& ObjectInitializer);

};

