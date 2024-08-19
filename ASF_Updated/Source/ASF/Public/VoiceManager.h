#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoiceManagerEvent_int32Delegate.h"
#include "VoiceManager.generated.h"

class UASFAudioComponent;

UCLASS(Blueprintable)
class ASF_API AVoiceManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceManagerEvent_int32 OnSpeakerVoiceFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UASFAudioComponent*> SpeakerVoiceComponents;
    
public:
    AVoiceManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnVoiceAudioFinished(UASFAudioComponent* ASFAudioComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UASFAudioComponent* GetSpeakerVoiceComponent(int32 _SpeakerID) const;
    
};

