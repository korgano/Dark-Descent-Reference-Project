#include "MarineSlot.h"

AMarineSlot::AMarineSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Marine = NULL;
    this->Animation = EnumBaseManagementMode::IDLES;
    this->Priority = 0;
}

bool AMarineSlot::IsEmpty() const {
    return false;
}

int32 AMarineSlot::GetPriority() const {
    return 0;
}

FName AMarineSlot::GetName() const {
    return NAME_None;
}

AHumanoid* AMarineSlot::GetMarine() const {
    return NULL;
}

EnumBaseManagementMode AMarineSlot::GetAnimation() const {
    return EnumBaseManagementMode::IDLES;
}

void AMarineSlot::Fill(AHumanoid* _Marine) {
}

void AMarineSlot::Empty() {
}


