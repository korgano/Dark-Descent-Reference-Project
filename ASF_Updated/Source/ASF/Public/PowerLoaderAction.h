#pragma once
#include "CoreMinimal.h"
#include "EPowerLoaderActivity.h"
#include "PowerLoaderAction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPowerLoaderAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPowerLoaderActivity Activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* actorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float floatParam;
    
    ASF_API FPowerLoaderAction();
};

