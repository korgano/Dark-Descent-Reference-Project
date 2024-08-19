#pragma once
#include "CoreMinimal.h"
#include "MapFeedbackData_UserWidget.h"
#include "MapFeedbackData_MovingObject.generated.h"

class UMapFeedbackDataComponent;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UMapFeedbackData_MovingObject : public UMapFeedbackData_UserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapFeedbackDataComponent* MapFeedbackDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMotionTrackerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFeedbackedOnlyOnMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleOnMotionTracker;
    
public:
    UMapFeedbackData_MovingObject();

protected:
    UFUNCTION(BlueprintCallable)
    void MotionTrackerVisibilityChanged(UMapFeedbackDataComponent* _MapFeedbackDataComponent, bool _IsVisibleOnMotionTracker);
    
};

