#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_StartMove.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UAnimNotifyState_StartMove : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationValue;
    
    UAnimNotifyState_StartMove();

};

