#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "Event_ASFAudioComponentDelegate.h"
#include "ASFAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFAudioComponent OnASFAudioFinished;
    
    UASFAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInternalAudioFinished();
    
};

