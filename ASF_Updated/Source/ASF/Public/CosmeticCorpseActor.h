#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticCorpseActor.generated.h"

class ASubLevelHandler;
class UPoseableMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASF_API ACosmeticCorpseActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMesh;
    
    ACosmeticCorpseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupDeadPoseOnPoseableMesh(UPoseableMeshComponent* PMesh, USkeletalMeshComponent* OriginalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(USkeletalMeshComponent* OriginalMesh);
    
    UFUNCTION(BlueprintCallable)
    void BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
};

