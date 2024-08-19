#pragma once
#include "CoreMinimal.h"
#include "UserSettingValue.h"
#include "UserSettingsSubsystem.h"
#include "UserSettingsSubsystem_PC.generated.h"

UCLASS(Blueprintable, Config=Engine)
class ASF_API UUserSettingsSubsystem_PC : public UUserSettingsSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstLaunch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserSettingValue> UserSettingValues;
    
public:
    UUserSettingsSubsystem_PC();

};

