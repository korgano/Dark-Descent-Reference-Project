#include "FeedbackZoneActor.h"

AFeedbackZoneActor::AFeedbackZoneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FeedbackShape = EFeedbackShape::DISC;
    this->OuterRadius = 1000.00f;
    this->InnerRadius = 0.00f;
    this->SecondaryRadius = 0.00f;
    this->ConeAngle = 360.00f;
    this->CapsuleTop_OuterRadius_Scale = 1.00f;
    this->CapsuleBottom_OuterRadius_Scale = 1.00f;
    this->Triangle_Radius_A = 1.00f;
    this->Triangle_Radius_B = 1.00f;
    this->Triangle_Radius_C = 1.00f;
    this->Fade = EFade::OFF;
    this->Fade_Softness = 1.00f;
    this->Fade_Softness_Offset = 0.00f;
    this->Fade_Softness_Offset_isRatioOfOuterRadius = true;
    this->Show_Outlines = true;
    this->OutlineStyle = EOutlineStyle::SINGLELINE;
    this->DiscVertexNbr = 360;
    this->CollisionChannel = ECC_WorldStatic;
    this->FeedbackZoneOwner = NULL;
    this->bUseMultithreading = true;
    this->AnimRing_EndRadiusUseOuterRadius = true;
    this->AnimRing_EndRadius = 0.00f;
    this->ASFProceduralMeshComponent = NULL;
}

bool AFeedbackZoneActor::UpdateFeedbackZone() {
    return false;
}

bool AFeedbackZoneActor::ShouldUpdateFeedbackZone_Implementation() {
    return false;
}

void AFeedbackZoneActor::SetProceduralMesh(UASFProceduralMeshComponent* _ASFProceduralMeshComponent) {
}

void AFeedbackZoneActor::SetOuterRadius(float _OuterRadius) {
}

void AFeedbackZoneActor::SetInnerRadius(float _InnerRadius) {
}

void AFeedbackZoneActor::SetConeAngle(float _ConeAngle) {
}

void AFeedbackZoneActor::InitFeedbackZoneCPP_Implementation() {
}

void AFeedbackZoneActor::EndUpdateFeedbackZone_Implementation() {
}


