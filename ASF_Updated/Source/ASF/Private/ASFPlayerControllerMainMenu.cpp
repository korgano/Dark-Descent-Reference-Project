#include "ASFPlayerControllerMainMenu.h"

AASFPlayerControllerMainMenu::AASFPlayerControllerMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->AccessibilityMenu = NULL;
    this->EULA_Agreed = false;
}


