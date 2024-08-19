#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnumAlienAttackMemberUsed.h"
#include "EnumAlienAttackSide.h"
#include "EnumAlienAttackType.h"
#include "EnumAttackStrenght.h"
#include "EnumCharacterHeightState.h"
#include "HitSoundStruct.h"
#include "AttackMontageDataAsset.generated.h"

class UAnimSequence;
class UAttackMontageDataAsset;

UCLASS(Blueprintable)
class ASF_API UAttackMontageDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAttackMontageDataAsset*> AttackMontagesLinked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAttackStrenght AttackStrenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSwitchFootAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienAttackMemberUsed MemberUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienAttackSide AttackSideOnMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAlienAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterHeightState HeightAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitSoundStruct HitSound;
    
    UAttackMontageDataAsset();

};

