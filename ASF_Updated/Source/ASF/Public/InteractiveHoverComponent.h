#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EnumHover.h"
#include "Event_Hover_Actor_bool_EnumHoverDelegate.h"
#include "InteractiveHoverComponent.generated.h"

class AASFPlayerController;
class AASFPlayerControllerTactical;
class AActor;
class UMeshComponent;
class UObject;
class UOutlinePPHandlerActorComponent;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveHoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAlreadyTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickCheckAngleFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InfraredGogglesCheckAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFPlayerControllerTactical* ASFPlayerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TickCheckAngleTimerHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle StopHoverDelayedTimerHandler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayInteractiveObjectByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Hover_Actor_bool_EnumHover OnHoverChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlinePPHandlerActorComponent* OutlineHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumHover CurrentHover;
    
    UInteractiveHoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDisplayHover();
    
private:
    UFUNCTION(BlueprintCallable)
    void TickCheckAngle();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopHoverDelayed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDisplayHoverFeedback();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUnHoveredActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHoveredActorRenderValue(int32 _Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAllHover();
    
    UFUNCTION(BlueprintCallable)
    void RefreshDisplayHover();
    
    UFUNCTION(BlueprintCallable)
    void OnEffectModification(UTinda_EffectHandlerComponent* EffectHandler, UTinda_Effect* Effect);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicModeChanged(AASFPlayerController* Controller, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAskingHover(UObject* Ref, EnumHover HoverType);
    
    UFUNCTION(BlueprintCallable)
    UOutlinePPHandlerActorComponent* GetOutlineHandler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNbHover(EnumHover HoverType) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetMeshComponentsToRenderHovered(TArray<UMeshComponent*>& _Res, AActor* _Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceNoHover();
    
    UFUNCTION(BlueprintCallable)
    void DisplayInteractiveObject(AASFPlayerController* Controller, bool bDisplayInteractiveObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayHoverFeedback(bool bIsHovered, EnumHover HoverType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ComponentCanBeHovered(UActorComponent* ActorComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void AskHover(bool B, UObject* Ref, EnumHover HoverType, bool _Force);
    
};

