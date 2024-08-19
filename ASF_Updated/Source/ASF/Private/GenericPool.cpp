#include "GenericPool.h"

UGenericPool::UGenericPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsUnlimited = true;
}

UObject* UGenericPool::SpawnObject(UClass* OutputType) {
    return NULL;
}

void UGenericPool::PreSpawnPool(UClass* ObjectType, int32 Number) {
}

void UGenericPool::EnableSpawnedObject(UClass* OutputType, UObject* objectToEnable) {
}

void UGenericPool::DeleteObject(UObject* Object) {
}


