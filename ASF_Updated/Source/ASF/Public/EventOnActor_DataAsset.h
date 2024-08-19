#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Feedback_EventOnActor.h"
#include "EventOnActor_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEventOnActor_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFeedback_EventOnActor> Messages;
    
    UEventOnActor_DataAsset();

};

