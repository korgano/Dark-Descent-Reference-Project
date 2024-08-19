#include "MovieTriggerInfo.h"

UMovieTriggerInfo::UMovieTriggerInfo() {
    this->TriggerLabel = TEXT("Default__MovieTriggerInfo");
    this->Movie = NULL;
    this->bIsFinished = true;
}

void UMovieTriggerInfo::TryTriggerMovieTriggerInfo(const UObject* WorldContextObject, const FString& _MovieUrl, bool _bIsFinished) {
}


