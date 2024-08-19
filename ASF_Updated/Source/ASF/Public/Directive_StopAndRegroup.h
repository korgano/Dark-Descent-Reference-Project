#pragma once
#include "CoreMinimal.h"
#include "Directive.h"
#include "Directive_StopAndRegroup.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API UDirective_StopAndRegroup : public UDirective {
    GENERATED_BODY()
public:
    UDirective_StopAndRegroup();

    UFUNCTION(BlueprintCallable)
    void DoStop(AActor* _TargetActor);
    
};

