#include "UserSettingsSubsystem_PC.h"

UUserSettingsSubsystem_PC::UUserSettingsSubsystem_PC() {
    this->bIsFirstLaunch = false;
    this->UserSettingValues.AddDefaulted(42);
}


