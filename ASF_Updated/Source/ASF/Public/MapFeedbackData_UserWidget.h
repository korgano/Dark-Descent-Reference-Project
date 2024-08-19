#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "MapFeedbackData_UserWidget.generated.h"

class AActor;
class AFOWRevertedManagerActor;
class AMinimapHandler;
class UCanvasPanelSlot;
class UFOWRevertedReader;
class UMapFeedbackDataContainer;
class UMapFeedbackDataProperties;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UMapFeedbackData_UserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapFeedbackDataContainer* MapFeedBackContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapFeedbackDataProperties* MapFeedBackProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CanvasPanel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScaleClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAffectedByFOWVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRenderScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRenderScaleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGrapnelableWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveBeenSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimapVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockGrapnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> WidgetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagStateModifierArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagAtInit;
    
public:
    UMapFeedbackData_UserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetState();
    
protected:
    UFUNCTION(BlueprintCallable)
    UFOWRevertedReader* UpdateVisibilityByReader();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateVisibility(bool _Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFOWVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFOWMinimapVisibility(bool _IsMinimapVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerWidgetButton(int32 _ButtonID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetUnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetHovered();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVisible(AActor* _Owner, bool _Visibility);
    
    UFUNCTION(BlueprintCallable)
    void OnStateChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRenderScaleUpdate(AMinimapHandler* _MinimapHandler, float _RenderScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReaderUpdate(UFOWRevertedReader* _FOWReader);
    
    UFUNCTION(BlueprintCallable)
    void OnFOWMinimapCleared(AFOWRevertedManagerActor* FOWManager);
    
    UFUNCTION(BlueprintCallable)
    void OnDiscovered(AActor* _Owner, bool _Visibility);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCurrentlyGrapnelable() const;
    
    UFUNCTION(BlueprintCallable)
    void InitWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitVisibility();
    
    UFUNCTION(BlueprintCallable)
    void InitState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetWidgetZOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseRenderScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenderScaleMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetOpenDataWidgetScale(int32 MapSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetObjectTags(FGameplayTagContainer& _TagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector4 GetObjectMapLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetObjectLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMotionTrackerImageSize(int32 MapSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGrapnelableWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActivated() const;
    
    UFUNCTION(BlueprintCallable)
    void AppendTagStateModifierArray(const TArray<FGameplayTag>& _TagStateModifierArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateWidget(bool _IsActivated);
    
};

