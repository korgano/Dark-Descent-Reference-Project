#include "SaveLoadComponent.h"

USaveLoadComponent::USaveLoadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveTypes.AddDefaulted(3);
    this->bHasBeenLoaded = false;
}

void USaveLoadComponent::SaveTindaEffects(UTinda_EffectHandlerComponent* _EffectHandler, FLevelObjectSaveStruct& _ObjectSaveStructPtr) {
}

void USaveLoadComponent::SavePropertiesFromObject(UObject* _Object, FLevelObjectSaveStruct& _ObjectSaveStructPtr, bool _bIsComponent) {
}

void USaveLoadComponent::SaveParentActorGeneric(ULevelSaveGame* GenericSave) {
}

void USaveLoadComponent::SaveParentActor(ESaveType _SaveType, const ULevelSaveGame* _LevelSaveGame) {
}

void USaveLoadComponent::OnSaveRequested_Event(ESaveType _SaveType) {
}

void USaveLoadComponent::OnCharacterMeshLoaded(AASFCharacter* Character) {
}

void USaveLoadComponent::LoadParentActorFromStruct(FLevelObjectSaveStruct& ObjectSaveStruct) {
}

bool USaveLoadComponent::HasBeenLoaded() {
    return false;
}

void USaveLoadComponent::GetAllSavedProperties(FLevelObjectSaveStruct& _ObjectSaveStructPtr) {
}

void USaveLoadComponent::ApplyValues() {
}


