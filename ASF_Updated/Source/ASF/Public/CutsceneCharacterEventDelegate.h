#pragma once
#include "CoreMinimal.h"
#include "CutsceneCharacterEventDelegate.generated.h"

class ACutsceneCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCutsceneCharacterEvent, ACutsceneCharacter*, Character);

