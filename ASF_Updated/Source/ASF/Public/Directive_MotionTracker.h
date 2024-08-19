#pragma once
#include "CoreMinimal.h"
#include "Directive.h"
#include "Templates/SubclassOf.h"
#include "Directive_MotionTracker.generated.h"

class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UDirective_MotionTracker : public UDirective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTinda_Effect> MotionTrackerEffect;
    
    UDirective_MotionTracker();

};

