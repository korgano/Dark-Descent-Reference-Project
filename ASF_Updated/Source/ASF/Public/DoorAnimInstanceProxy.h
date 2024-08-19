#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "Event_DoorAnimInstanceProxyDelegate.h"
#include "DoorAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FDoorAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DoorAnimInstanceProxy OnRequestUpdateProxy;
    
    FDoorAnimInstanceProxy();
};

