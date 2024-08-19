#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CycleAnimation.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class ASF_API UCycleAnimation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAtStopAnim;
    
    UCycleAnimation();

};

