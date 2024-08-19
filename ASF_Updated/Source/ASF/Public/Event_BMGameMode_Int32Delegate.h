#pragma once
#include "CoreMinimal.h"
#include "Event_BMGameMode_Int32Delegate.generated.h"

class AASFGameModeBase_BaseManagement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_BMGameMode_Int32, AASFGameModeBase_BaseManagement*, GameModeBM, int32, Turn);

