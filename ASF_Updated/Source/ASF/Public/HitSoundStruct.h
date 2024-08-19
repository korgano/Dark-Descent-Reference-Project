#pragma once
#include "CoreMinimal.h"
#include "EnumWound.h"
#include "HitSoundStruct.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FHitSoundStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumWound, TSoftObjectPtr<USoundCue>> WoundSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> BlockHit;
    
    ASF_API FHitSoundStruct();
};

