#pragma once
#include "CoreMinimal.h"
#include "LightConfig.h"
#include "ActorLightConfig.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorLightConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightConfig OutdoorConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightConfig IndoorConfig;
    
    ASF_API FActorLightConfig();
};

