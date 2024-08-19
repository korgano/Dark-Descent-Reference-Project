#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EUserSettingType.h"
#include "UserSettingValue.generated.h"

USTRUCT(BlueprintType)
struct FUserSettingValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SettingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUserSettingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Value;
    
    ASF_API FUserSettingValue();
};

