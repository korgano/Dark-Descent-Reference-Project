#include "UpgradeEquipment.h"
#include "Components/StaticMeshComponent.h"

AUpgradeEquipment::AUpgradeEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Equipment Mesh"));
    this->EquipmentMesh = (UStaticMeshComponent*)RootComponent;
    this->AttachmentType = EnumUpgradeAttachmentType::ATTACH_TO_MARINE;
    this->AttachParentHumanoid = NULL;
}

void AUpgradeEquipment::OnHumanoidWeaponChanged(UCombatComponent* _CombatComponent, AWeapon* _Weapon) {
}

FGameplayTagQuery AUpgradeEquipment::GetWeaponQuery() const {
    return FGameplayTagQuery{};
}

FName AUpgradeEquipment::GetSocketName() const {
    return NAME_None;
}

void AUpgradeEquipment::AttachToHumanoid(AHumanoid* Humanoid) {
}


