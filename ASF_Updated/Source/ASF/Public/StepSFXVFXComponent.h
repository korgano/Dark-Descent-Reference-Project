#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DecalForStep.h"
#include "EStepSide.h"
#include "StepSFXVFXComponent.generated.h"

class UCharacterMouvementSFXDataAsset;
class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UStepSFXVFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStepSide, FName> MapStepSideBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UPhysicalMaterial>, FDecalForStep> MapStepSideDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterMouvementSFXDataAsset* CharacterMouvementSFXDataAsset;
    
public:
    UStepSFXVFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NewStepEvent(EStepSide StepSide);
    
};

