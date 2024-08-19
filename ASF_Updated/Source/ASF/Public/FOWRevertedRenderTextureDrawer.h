#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Event_DrawerUpdateDelegate.h"
#include "FOVRenderTextureProperties.h"
#include "Templates/SubclassOf.h"
#include "FOWRevertedRenderTextureDrawer.generated.h"

class AActor;
class AFOWRevertedManagerActor;
class UTinda_Attribute;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UFOWRevertedRenderTextureDrawer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFOWRevertedManagerActor* FOWManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LockedDrawLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceTypeQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockDrawLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowRaySnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedRedrawing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDynamicResizing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveFogOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DumpBinaryTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FOVRayCastNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> RenderTargetMaskPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> FOVCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Directions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOVRenderTextureProperties RenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FOVAdditionnalRayCast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OcclusionNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HightOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DrawerUpdate OnDrawerUpdated;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> HitObjects;
    
    UFOWRevertedRenderTextureDrawer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveDrawerFromManager();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateMask();
    
    UFUNCTION(BlueprintCallable)
    FVector RaycastOnDrawer(FVector Begin, FVector End, bool VisibleIsLimite);
    
    UFUNCTION(BlueprintCallable)
    void OnViewDistanceUpdated(UTinda_Attribute* _Attribute, float _OldValue, float _NewValue);
    
    UFUNCTION(BlueprintCallable)
    void MaskRegenerated();
    
    UFUNCTION(BlueprintCallable)
    void LockDrawLocation(bool _IsLocked);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetObjectOfClass(TSubclassOf<AActor> ObjectType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDrawLocation() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDrawerStateAt(FVector ActorPosition);
    
    UFUNCTION(BlueprintCallable)
    FVector GetDrawerCenter() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableDrawer();
    
    UFUNCTION(BlueprintCallable)
    void DumpTextureDrawer(const FString& SaveDirectory, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void AddDrawerToManager();
    
};

