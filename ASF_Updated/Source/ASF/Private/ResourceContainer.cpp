#include "ResourceContainer.h"

UResourceContainer::UResourceContainer() {
    this->CurrentValue = 0;
    this->NbResourcesReserved = 0;
    this->NbFreeResources = 0;
}

void UResourceContainer::SpendResources(int32 _Value, bool _HasBeenReserved) {
}

void UResourceContainer::ReserveResources(int32 _Value) {
}

int32 UResourceContainer::RemoveFreeResources(int32 _Value) {
    return 0;
}

bool UResourceContainer::HaveEnoughResources(int32 _Value) {
    return false;
}

int32 UResourceContainer::GetNbResourcesReserved() const {
    return 0;
}

int32 UResourceContainer::GetNbFreeResources() const {
    return 0;
}

int32 UResourceContainer::GetCurrentValue() const {
    return 0;
}

int32 UResourceContainer::GetCapacityUsed() const {
    return 0;
}

int32 UResourceContainer::GetAvailableResources() const {
    return 0;
}

void UResourceContainer::FreeResources(int32 _Value) {
}

int32 UResourceContainer::AddResources(int32 _Value, int32 _FreeCapacity) {
    return 0;
}

void UResourceContainer::AddFreeResources(int32 _Value) {
}


