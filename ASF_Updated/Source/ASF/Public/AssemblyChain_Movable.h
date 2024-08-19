#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SignificanceRender_Interface.h"
#include "AssemblyChain_Movable.generated.h"

class AAssemblyChain_SplineSpawner;
class USplineComponent;

UCLASS(Blueprintable)
class ASF_API AAssemblyChain_Movable : public AActor, public ISignificanceRender_Interface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAssemblyChain_SplineSpawner* AssemblyChain_SplineSpawner_Ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAlpha;
    
public:
    AAssemblyChain_Movable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePositionThroughtSpline(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineAlpha() const;
    

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

