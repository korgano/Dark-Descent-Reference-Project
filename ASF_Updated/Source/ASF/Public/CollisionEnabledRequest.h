#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CollisionEnabledRequest.generated.h"

USTRUCT(BlueprintType)
struct FCollisionEnabledRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> collisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numberRequest;
    
    ASF_API FCollisionEnabledRequest();
};

