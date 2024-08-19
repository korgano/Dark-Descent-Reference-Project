#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponTargetStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWeaponTargetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorTarget;
    
    ASF_API FWeaponTargetStruct();
};

