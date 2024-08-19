#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EventsWriteEventsResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEventsWriteEventsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssignedEventIds;
    
    FEventsWriteEventsResponse();
};

