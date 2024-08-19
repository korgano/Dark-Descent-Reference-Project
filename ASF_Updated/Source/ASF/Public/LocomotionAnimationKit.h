#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LocomotionAnimationKit.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class ASF_API ULocomotionAnimationKit : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequence*> StartsAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* MoveLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StopRightAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StopLeftAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequence*> RotateInPlaceAnim;
    
    ULocomotionAnimationKit();

};

