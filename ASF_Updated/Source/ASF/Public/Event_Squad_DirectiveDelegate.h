#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_DirectiveDelegate.generated.h"

class ASquad;
class UDirective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_Directive, ASquad*, Squad, UDirective*, Directive);

