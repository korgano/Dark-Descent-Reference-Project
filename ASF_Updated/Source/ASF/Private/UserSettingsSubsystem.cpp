#include "UserSettingsSubsystem.h"

UUserSettingsSubsystem::UUserSettingsSubsystem() {
}

void UUserSettingsSubsystem::SetUserSettingAsInt(FGameplayTag _SettingTag, int32 _Value, bool _Apply) {
}

void UUserSettingsSubsystem::SetUserSettingAsFloat(FGameplayTag _SettingTag, float _Value, bool _Apply) {
}

void UUserSettingsSubsystem::SetUserSettingAsEnumText(FGameplayTag _SettingTag, const FText& _Value, bool _Apply) {
}

void UUserSettingsSubsystem::SetUserSettingAsByte(FGameplayTag _SettingTag, uint8 _Value, bool _Apply) {
}

void UUserSettingsSubsystem::SetUserSettingAsBool(FGameplayTag _SettingTag, bool _Value, bool _Apply) {
}

void UUserSettingsSubsystem::SetDefaultGraphicSettings() {
}

void UUserSettingsSubsystem::SaveUserSettings() {
}

void UUserSettingsSubsystem::ResetUserSetting(FGameplayTag _SettingTag) {
}

int32 UUserSettingsSubsystem::GetUserSettingAsInt(FGameplayTag _SettingTag) const {
    return 0;
}

float UUserSettingsSubsystem::GetUserSettingAsFloat(FGameplayTag _SettingTag) const {
    return 0.0f;
}

FText UUserSettingsSubsystem::GetUserSettingAsEnumText(FGameplayTag _SettingTag) const {
    return FText::GetEmpty();
}

uint8 UUserSettingsSubsystem::GetUserSettingAsByte(FGameplayTag _SettingTag) const {
    return 0;
}

bool UUserSettingsSubsystem::GetUserSettingAsBool(FGameplayTag _SettingTag) const {
    return false;
}

FUserSetting UUserSettingsSubsystem::GetUserSetting(FGameplayTag _SettingTag) const {
    return FUserSetting{};
}

void UUserSettingsSubsystem::GetFloatUserSettingValues(FGameplayTag _SettingTag, float& _DefaultValue, float& _MinValue, float& _MaxValue) const {
}

int32 UUserSettingsSubsystem::GetCustomEnumUserSettingDefaultValue(FGameplayTag _SettingTag) {
    return 0;
}

FString UUserSettingsSubsystem::GetCultureNameFromLanguageEnum(EDisplayLanguage Language) {
    return TEXT("");
}


