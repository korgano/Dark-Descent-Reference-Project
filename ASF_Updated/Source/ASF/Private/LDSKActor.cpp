#include "LDSKActor.h"
#include "Components/SkeletalMeshComponent.h"

ALDSKActor::ALDSKActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->BlockMesh = NULL;
    this->TrueMesh = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}

void ALDSKActor::SetSKTrueMeshOnCDO(UBlueprint* _BP, USkeletalMesh* _TrueMesh) {
}


