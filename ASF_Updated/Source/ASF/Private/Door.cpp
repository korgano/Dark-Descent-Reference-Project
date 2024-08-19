#include "Door.h"
#include "Tinda_EffectHandlerComponent.h"

ADoor::ADoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Breacher = NULL;
    this->DoorDataAsset = NULL;
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->bIsFacingRight = false;
    this->bIsAngleDoor = false;
    this->GraphID = -1;
    this->WeldPointCurrent = 0;
    this->WeldPointMax = 10;
}


void ADoor::SetWeldPointCurrent(int32 _WeldPoint) {
}

void ADoor::SetTerminalMesh(const TSoftObjectPtr<UStaticMesh>& _Mesh) {
}









void ADoor::SetDoorAnim(UAnimationAsset* Anim) {
}





void ADoor::SetBreacher(AASFCharacter* _Breacher) {
}


void ADoor::Rotate90Degree() {
}

void ADoor::RemoveSideBreacher_Implementation(UObject* _SideBreacher) {
}

void ADoor::OnBreacherActionEnded(UAIAction* _Action, EnumAIActionStatus _AIActionStatus) {
}

bool ADoor::IsDoorOpenedOrOpening() const {
    return false;
}

bool ADoor::IsDoorOpened() const {
    return false;
}

bool ADoor::IsDoorClosedOrClosing() const {
    return false;
}

bool ADoor::IsDoorClosed() const {
    return false;
}

bool ADoor::IsAvailable() const {
    return false;
}

void ADoor::InitDoorWithPDA_Implementation() {
}

int32 ADoor::GetWeldPointMax() const {
    return 0;
}

int32 ADoor::GetWeldPointCurrent() {
    return 0;
}



TSoftClassPtr<UMapFeedbackDataProperties> ADoor::GetOpenDataProperties_Implementation() const {
    return NULL;
}

TArray<ATerminal*> ADoor::GetLinkedTerminals() {
    return TArray<ATerminal*>();
}



int32 ADoor::GetGraphID() const {
    return 0;
}


float ADoor::GetDoorThickness_Implementation() const {
    return 0.0f;
}

FVector ADoor::GetCustomCenterLocation_Implementation() const {
    return FVector{};
}

void ADoor::ForceUnweld_Implementation() {
}

void ADoor::CreateAnimInstance() {
}

void ADoor::AddSideBreacher_Implementation(UObject* _SideBreacher) {
}

void ADoor::AddLinkedTerminal(ATerminal* _Terminal) {
}


