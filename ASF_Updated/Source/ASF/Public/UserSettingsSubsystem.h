#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EDisplayLanguage.h"
#include "UserSetting.h"
#include "UserSettingsEvent_BoolDelegate.h"
#include "UserSettingsEvent_GameplayTag_BoolDelegate.h"
#include "UserSettingsEvent_GameplayTag_FloatDelegate.h"
#include "UserSettingsEvent_GameplayTag_IntDelegate.h"
#include "UserSettingsEvent_GameplayTag_Uint8Delegate.h"
#include "UserSettingsEvent_RebindingDelegate.h"
#include "UserSettingsSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class ASF_API UUserSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSettingsEvent_Bool OnUserSettingsInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSettingsEvent_Bool OnUserSettingsSetDefaultSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSettingsEvent_GameplayTag_Bool OnUserSettingBoolValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSettingsEvent_GameplayTag_Float OnUserSettingFloatValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSettingsEvent_GameplayTag_Uint8 OnUserSettingByteValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSettingsEvent_GameplayTag_Int OnUserSettingIntValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSettingsEvent_Rebinding OnUserSettingRebinding;
    
    UUserSettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUserSettingAsInt(FGameplayTag _SettingTag, int32 _Value, bool _Apply);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSettingAsFloat(FGameplayTag _SettingTag, float _Value, bool _Apply);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSettingAsEnumText(FGameplayTag _SettingTag, const FText& _Value, bool _Apply);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSettingAsByte(FGameplayTag _SettingTag, uint8 _Value, bool _Apply);
    
    UFUNCTION(BlueprintCallable)
    void SetUserSettingAsBool(FGameplayTag _SettingTag, bool _Value, bool _Apply);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultGraphicSettings();
    
    UFUNCTION(BlueprintCallable)
    void SaveUserSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetUserSetting(FGameplayTag _SettingTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUserSettingAsInt(FGameplayTag _SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUserSettingAsFloat(FGameplayTag _SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUserSettingAsEnumText(FGameplayTag _SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetUserSettingAsByte(FGameplayTag _SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUserSettingAsBool(FGameplayTag _SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserSetting GetUserSetting(FGameplayTag _SettingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFloatUserSettingValues(FGameplayTag _SettingTag, float& _DefaultValue, float& _MinValue, float& _MaxValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCustomEnumUserSettingDefaultValue(FGameplayTag _SettingTag);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCultureNameFromLanguageEnum(EDisplayLanguage Language);
    
};

