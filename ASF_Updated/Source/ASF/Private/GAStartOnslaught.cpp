#include "GAStartOnslaught.h"

UGAStartOnslaught::UGAStartOnslaught() {
    this->ActionLabel = TEXT("Start Alien Onslaught");
    this->bIsUsableClass = true;
    this->DisplayName = TEXT("Start Alien Onslaught");
    this->OnslaughtType = EOnslaughtType::SCRIPTED_DEFENSE;
}


