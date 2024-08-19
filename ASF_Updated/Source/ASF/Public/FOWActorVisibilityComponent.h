#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EnumFOWVisionType.h"
#include "Event_Actor_boolDelegate.h"
#include "FOWActorVisibilityComponent.generated.h"

class AActor;
class AFOWRevertedManagerActor;
class USceneComponent;
class UTrackedComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UFOWActorVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FOWBoundRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrackedComponent* TrackedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForceVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimapUpdateOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFOWBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddSeenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> SceneComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ActorLocationOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Actor_bool OnVisibilityUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Actor_bool OnDiscovereUpdated;
    
    UFOWActorVisibilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateComponentVisibility(AFOWRevertedManagerActor* FOWManager);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateAllFOWVisibility(AFOWRevertedManagerActor* FOWManager);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSceneComponent(USceneComponent* _SceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EnumFOWVisionType GetVisibilityType(AFOWRevertedManagerActor* _FOWManager) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceVisibility(bool _NewForcedVisibility);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisibility(bool _bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void AddSceneComponents(const TArray<USceneComponent*>& _SceneComponents);
    
};

