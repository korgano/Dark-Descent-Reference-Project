#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InputName.generated.h"

USTRUCT(BlueprintType)
struct FInputName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey GamepadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyboardKey;
    
    ASF_API FInputName();
};

