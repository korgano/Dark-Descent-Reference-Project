#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_AnimationDebugVisualisation_boolDelegate.h"
#include "AnimationDebugVisualisation.generated.h"

class UAnimationComponent;
class UPhysicalReactionComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASF_API AAnimationDebugVisualisation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimationDebugVisualisation_bool OnSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLyingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceUnconscious;
    
    AAnimationDebugVisualisation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPhysicalReactionComponent* GetPhysicalReactionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UAnimationComponent* GetAnimComponent() const;
    
};

