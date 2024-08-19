#include "Tinda_TickManager.h"

ATinda_TickManager::ATinda_TickManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IgnoreGlobalTimeDilation = true;
}

ATinda_TickManager* ATinda_TickManager::GetTinda_TickManager(const UObject* _WorldRef) {
    return NULL;
}


