#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FeedbackActorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFeedbackActorInterface : public UInterface {
    GENERATED_BODY()
};

class IFeedbackActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetRelativeFeedbackLocation();
    
};

