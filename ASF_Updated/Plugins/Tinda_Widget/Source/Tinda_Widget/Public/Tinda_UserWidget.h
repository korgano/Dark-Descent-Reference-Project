#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InputAxisDelegateDelegate.h"
#include "Tinda_UserWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class TINDA_WIDGET_API UTinda_UserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClickBlockerWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ParentActor;
    
public:
    UTinda_UserWidget();

    UFUNCTION(BlueprintCallable)
    void StopListeningForInputAxis(FName _AxisName);
    
    UFUNCTION(BlueprintCallable)
    void SetParentActor(AActor* _Parent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCultureChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ListenForAxisEvent(FName Axis, FInputAxisDelegate func, bool bConsume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCursorHoverClickBlockerWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetParentActor();
    
};

