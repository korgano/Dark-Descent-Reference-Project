#pragma once
#include "CoreMinimal.h"
#include "LDActor.h"
#include "LDSKActor.generated.h"

class UBlueprint;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASF_API ALDSKActor : public ALDActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BlockMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TrueMesh;
    
    ALDSKActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetSKTrueMeshOnCDO(UBlueprint* _BP, USkeletalMesh* _TrueMesh);
    
};

