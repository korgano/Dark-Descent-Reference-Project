#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EWidgetType.h"
#include "Event_UUIVisibilityComponent_EWidgetType_boolDelegate.h"
#include "Event_UUIVisibilityComponent_UInteractiveComponent_boolDelegate.h"
#include "UIVisibilityComponent.generated.h"

class UInteractiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UUIVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UUIVisibilityComponent_EWidgetType_bool OnUIVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UUIVisibilityComponent_EWidgetType_bool OnUIHighlightChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UUIVisibilityComponent_UInteractiveComponent_bool OnHilightInteractionButtonChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<EWidgetType> WidgetsToHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractiveComponent*> InteractionToHighlight;
    
    UUIVisibilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnhideWidgets(const TArray<EWidgetType>& _WidgetsToUnhide);
    
    UFUNCTION(BlueprintCallable)
    void UnhideWidget(EWidgetType _WidgetToUnhide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetVisible(EWidgetType _Widget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionHighligted(UInteractiveComponent* _Comp) const;
    
    UFUNCTION(BlueprintCallable)
    void HighlightWidget(EWidgetType _WidgetToHide, bool _bNewHighlight);
    
    UFUNCTION(BlueprintCallable)
    void HighlightInteraction(UInteractiveComponent* _InteractiveComponent, bool _bNewHighlight);
    
    UFUNCTION(BlueprintCallable)
    void HideWidgets(const TArray<EWidgetType>& _WidgetsToHide);
    
    UFUNCTION(BlueprintCallable)
    void HideWidget(EWidgetType _WidgetToHide);
    
};

