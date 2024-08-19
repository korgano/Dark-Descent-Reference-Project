#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FeedBackZoneManagerActor.generated.h"

class AFeedbackZoneActor;

UCLASS(Blueprintable)
class ASF_API AFeedBackZoneManagerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFeedbackZoneActor*> MUltiThreadedFeedbackZone;
    
public:
    AFeedBackZoneManagerActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllFeedbackZone();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveFeedbackZone(AFeedbackZoneActor* _FeedbackZone);
    
    UFUNCTION(BlueprintCallable)
    void AddFeedbackZone(AFeedbackZoneActor* _FeedbackZone);
    
};

