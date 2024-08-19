#pragma once
#include "CoreMinimal.h"
#include "UserSettingsEnum.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct FUserSettingsEnum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* UserSettingsEnum;
    
    ASF_API FUserSettingsEnum();
};

