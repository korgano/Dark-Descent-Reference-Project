#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CutsceneAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class TINDA_MIRRORANIMNODE_API UCutsceneAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UCutsceneAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
};

