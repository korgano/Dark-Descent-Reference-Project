#pragma once
#include "CoreMinimal.h"
#include "ASFCharacter.h"
#include "ChemicalTracker.generated.h"

class UCharacterDataAsset;
class USkill_ChemicalTracker_DataAsset;

UCLASS(Blueprintable)
class ASF_API AChemicalTracker : public AASFCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill_ChemicalTracker_DataAsset* ChemicalTrackerDataAsset;
    
public:
    AChemicalTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayTargetingZone(bool bShow);
    
};

