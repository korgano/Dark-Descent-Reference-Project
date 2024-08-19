#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EnumFeedbackType.h"
#include "Event_UMapFeedbackComponent_BoolDelegate.h"
#include "Templates/SubclassOf.h"
#include "TwinActorBootable.h"
#include "MapFeedbackComponent.generated.h"

class UMapFeedbackComponent;
class UMapFeedbackUserWidget;
class USlateBrushAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMapFeedbackComponent : public UActorComponent, public ITwinActorBootable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* MapFeedbackTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevealInLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyIfMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyInMotionTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevealInTrueSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumFeedbackType FeedbackType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UMapFeedbackComponent_Bool OnFeedbackComponentActivationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapFeedbackUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInit;
    
    UMapFeedbackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSize(const FVector2D& NewSize);
    
    UFUNCTION(BlueprintCallable)
    void InitMapFeedbackComponent(bool _bIsActivated, USlateBrushAsset* _MapFeedbackTexture, FLinearColor _Color, FVector2D _Size);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMapFeedbackComponent*> GetAllActivatedMapFeedbackComponents();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFeedbackComponent();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFeedbackComponent();
    

    // Fix for true pure virtual functions not being implemented
};

