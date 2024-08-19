#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "ColorMat.h"
#include "EnumLDActorCoverType.h"
#include "EnumLDActorCrossableType.h"
#include "EnumLDActorType.h"
#include "SignificanceRender_Interface.h"
#include "LDActor.generated.h"

class UActorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASF_API ALDActor : public AActorWithGameplayTag, public ISignificanceRender_Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLDType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumLDActorType LDType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumLDActorCoverType CoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrossable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumLDActorCrossableType CrossableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorMat> BlockMeshColorOveride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActorOrComponentsNeedsTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> TickingComponents;
    
public:
    ALDActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchMesh();
    
    UFUNCTION(BlueprintCallable)
    void ForceTrueMesh();
    
    UFUNCTION(BlueprintCallable)
    void ForceblockMesh();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ShouldChangeRenderState() const override PURE_VIRTUAL(ShouldChangeRenderState, return false;);
    
    UFUNCTION()
    FVector GetObjectLocation() const override PURE_VIRTUAL(GetObjectLocation, return FVector{};);
    
    UFUNCTION()
    FBoxSphereBounds GetObjectBounds() const override PURE_VIRTUAL(GetObjectBounds, return FBoxSphereBounds{};);
    
    UFUNCTION()
    void DestroyRenderState() override PURE_VIRTUAL(DestroyRenderState,);
    
    UFUNCTION()
    void CreateRenderState() override PURE_VIRTUAL(CreateRenderState,);
    
};

