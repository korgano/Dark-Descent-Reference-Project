#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPropsCollType.h"
#include "SignificanceRender_Interface.h"
#include "Templates/SubclassOf.h"
#include "PropsCollAndNavActor.generated.h"

class UASFProceduralMeshComponent;
class UASFStaticMeshComponent;
class UBoxComponent;
class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNavArea;
class UNavModifierComponent;
class UProceduralMeshComponent;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class ASF_API APropsCollAndNavActor : public AActor, public ISignificanceRender_Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> OriginalVertsCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> EditableVertsCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UASFProceduralMeshComponent*> ProceduralMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UASFStaticMeshComponent*> StaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NegSpaceMatToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* MatToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* TransluMatToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTranslu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOriginalShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAesthetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFOWCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor FOWColliderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor AestheticColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegSpaceBlockFOW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateAutoFOWCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastGenerateAutoFOWCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X_ScaleAutoFOWCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X_LastScaleAutoFOWCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y_ScaleAutoFOWCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y_LastScaleAutoFOWCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropsCollType PropsCollType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOnlyNavBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHeightHighCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridedHeightHighCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHeightHighNegSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridedHeightNegSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPropsCollType, FColor> MapTypeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPropsCollType, TSubclassOf<UNavArea>> MapTypeNavClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> OverridedNavArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MatsDyn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> OriginalMatsDyn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UASFProceduralMeshComponent*> OriginalProceduralMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor OriginalShapeColorMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MergedPropsActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FOWBoxComponent;
    
    APropsCollAndNavActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchMat(bool bTranslu);
    
    UFUNCTION(BlueprintCallable)
    void SetHideShape(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void SetHideAsset(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMergedActors(const TArray<AActor*>& ActorToMerge);
    
    UFUNCTION(BlueprintCallable)
    void InitPropsCollAndNavActor(const TArray<FVector>& _OriginalVertsCollisions, uint8 _PropsCollType);
    
    UFUNCTION(BlueprintCallable)
    float GetHeightForCurrentType() const;
    
    UFUNCTION(BlueprintCallable)
    FColor GetColor() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCollisionProfileForCurrentType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetActorsOverlappingThisProps();
    
    UFUNCTION(BlueprintCallable)
    void GenerateMesh(const TArray<FVector>& ArrayVerts, bool bIsoriginal);
    
    UFUNCTION(BlueprintCallable)
    void ForceRerunCS();
    
    UFUNCTION(BlueprintCallable)
    void ConvertToST();
    
    UFUNCTION(BlueprintCallable)
    UStaticMesh* ConvertProceduralToStatic(UProceduralMeshComponent* ProceduralMesh);
    
    UFUNCTION(BlueprintCallable)
    void AddMergedActors(const TArray<AActor*>& ActorToMerge, bool bForce);
    

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

