#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "MovieTriggerInfo.generated.h"

class UMediaSource;
class UObject;

UCLASS(Blueprintable)
class ASF_API UMovieTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovieUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinished;
    
    UMovieTriggerInfo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TryTriggerMovieTriggerInfo(const UObject* WorldContextObject, const FString& _MovieUrl, bool _bIsFinished);
    
};

