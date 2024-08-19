#include "LDSTActor.h"
#include "Components/StaticMeshComponent.h"
#include "Templates/SubclassOf.h"

ALDSTActor::ALDSTActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->bNeedToChangeCustomDepth = false;
    this->bNeedToActivateCustomDepth = false;
    this->bIsFaded = false;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->BlockMesh = NULL;
    this->TrueMesh = NULL;
    this->ExteriorWallFOWDrawer = NULL;
    this->NavModifier = NULL;
    this->BlockMeshClass = NULL;
    this->TrueMeshClass = NULL;
    this->bCustomLightChanel = false;
    this->bNoCollision = false;
    this->bOverrideShadow = false;
    this->bHasBeenRegenerated = false;
    this->bIsMergedActor = false;
    this->bKeepMeshCollider = false;
    this->bCanReceiveDecal = true;
    this->bIsExteriorWall = false;
    this->bIsInDebugCollisionMode = false;
    this->bIsInDebugTypeMode = false;
    this->Mesh->SetupAttachment(RootComponent);
}

void ALDSTActor::SetTrueMeshClass(TSubclassOf<ALDSTActor> _Class) {
}

void ALDSTActor::SetSTTrueMeshOnCDO(UBlueprint* _BP, UStaticMesh* _TrueMesh) {
}

void ALDSTActor::SetNewLDType(EnumLDActorType NewType) {
}

UClass* ALDSTActor::SetMeshOnCDO(UBlueprint* _BP, UStaticMesh* _Mesh) {
    return NULL;
}

void ALDSTActor::SetBlockMeshClass(TSubclassOf<ALDSTActor> _Class) {
}

void ALDSTActor::RemoveRoofFadingInfos(const TArray<FRoofFadingInfo>& NewInfoToRemove) {
}

void ALDSTActor::OnSubLevelUnload(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ALDSTActor::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ALDSTActor::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void ALDSTActor::OnIndoorCameraBoundaryUpdated(AASFGameModeBase_TacticalMode* GameMode, const FString& Building, bool bActivate) {
}

void ALDSTActor::MarkAsKeepMeshCollision(bool bKeepMesh) {
}

bool ALDSTActor::IsInDebugMode() const {
    return false;
}

bool ALDSTActor::IsFromThisBuilding(const FString& BuildingName) const {
    return false;
}

bool ALDSTActor::IsBlockMesh() const {
    return false;
}

FVector ALDSTActor::GetYVector() {
    return FVector{};
}

FVector ALDSTActor::GetXVector() {
    return FVector{};
}

TSubclassOf<ALDSTActor> ALDSTActor::GetTrueMeshClass() const {
    return NULL;
}

FVector ALDSTActor::GetCenterVector() {
    return FVector{};
}

TSubclassOf<ALDSTActor> ALDSTActor::GetBlockMeshClass() const {
    return NULL;
}

void ALDSTActor::ForceMatForLDType_Debug(bool bDebugMode) {
}

void ALDSTActor::ForceMatForColType_Debug(bool bDebugMode) {
}

void ALDSTActor::FadeLDSTActorOnOff(bool _bFadeOn) {
}

void ALDSTActor::DelegateCustomCullAfterFade() {
}

void ALDSTActor::AddRoofFadingInfos(const TArray<FRoofFadingInfo>& NewInfoToAdd) {
}


