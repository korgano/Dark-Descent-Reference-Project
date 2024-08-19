#pragma once
#include "CoreMinimal.h"
#include "Event_DirectiveDelegate.generated.h"

class UDirective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Directive, UDirective*, Directive);

