#pragma once
#include "CoreMinimal.h"
#include "SentrySaved.generated.h"

USTRUCT(BlueprintType)
struct FSentrySaved {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 nbBullet;
    
    ASF_API FSentrySaved();
};

