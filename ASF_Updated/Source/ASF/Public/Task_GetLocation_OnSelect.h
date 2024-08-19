#pragma once
#include "CoreMinimal.h"
#include "OutputPinDelegate.h"
#include "OutputPin_TaskDelegate.h"
#include "OutputPin_Task_FVector_boolDelegate.h"
#include "Task.h"
#include "Task_GetLocation_OnSelect.generated.h"

class UObject;
class UTask_GetLocation_OnSelect;

UCLASS(Blueprintable)
class ASF_API UTask_GetLocation_OnSelect : public UTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin_Task_FVector_bool SelectActionPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin_Task_FVector_bool SelectActionReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin_Task_FVector_bool OnDragAndDropModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin Cancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin_Task OnTaskInitialized;
    
    UTask_GetLocation_OnSelect();

    UFUNCTION(BlueprintCallable)
    void UnbindAll();
    
private:
    UFUNCTION(BlueprintCallable)
    void TickEvent();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTask_GetLocation_OnSelect* Task_GetLocation_OnSelect(const UObject* WorldContextObject, float _DistanceForDragAndDrop, bool _bConsumeInputOrder, bool _bConsumeInputSelect, bool _bEndTaskOnRelease);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReleasedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    void DoNothing();
    
};

