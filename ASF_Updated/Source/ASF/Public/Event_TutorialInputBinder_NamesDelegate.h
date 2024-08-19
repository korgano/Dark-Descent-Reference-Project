#pragma once
#include "CoreMinimal.h"
#include "Event_TutorialInputBinder_NamesDelegate.generated.h"

class ATutorialInputBinder;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_TutorialInputBinder_Names, ATutorialInputBinder*, TutorialInputBinder, const TArray<FName>&, Names);

