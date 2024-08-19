#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EventsWriteEventsResponse.h"
#include "PlayFabEventsModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEventsModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabEventsModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FEventsWriteEventsResponse decodeWriteEventsResponseResponse(UPlayFabJsonObject* response);
    
};

