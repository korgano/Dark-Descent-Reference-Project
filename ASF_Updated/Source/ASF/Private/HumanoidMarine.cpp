#include "HumanoidMarine.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpotLightComponent.h"

AHumanoidMarine::AHumanoidMarine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SquadID = 0;
    this->DefaultPoiPerception_DataAsset = NULL;
    //this->ShoulderSpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("ShoulderSpotLight"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->bShouldCreateMarineCard = true;
    this->bDisableInteractionCapsuleOnDeath = true;
    this->EnemyAcknowsDataAsset = NULL;
    //this->ShoulderSpotLight->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AHumanoidMarine::ToggleLight_Implementation(bool _Value) {
}

bool AHumanoidMarine::ShouldCreateMarineCard() const {
    return false;
}

void AHumanoidMarine::RemoveOverwatchInfluence_Implementation() {
}

void AHumanoidMarine::OnDisablingTagsChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

USpotLightComponent* AHumanoidMarine::GetShoulderSpotLight() const {
    return NULL;
}

int32 AHumanoidMarine::GetPositionInSquad() {
    return 0;
}

UMarinesAIActionComponent* AHumanoidMarine::GetAI_ActionComponent() const {
    return NULL;
}

void AHumanoidMarine::AddOverwatchInfluence_Implementation() {
}


