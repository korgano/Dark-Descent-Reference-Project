#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_Diversion_DataAsset.generated.h"

class UObject;
class USoundCue;

UCLASS(Blueprintable)
class ASF_API USkill_Diversion_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowingVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowApexHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiversionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiversionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DiversionSound;
    
    USkill_Diversion_DataAsset();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FText GetAccuracyBonus(const UObject* WorldContextObject) const;
    
};

