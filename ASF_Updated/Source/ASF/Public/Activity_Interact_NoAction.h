#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Activity_Interact.h"
#include "Templates/SubclassOf.h"
#include "Activity_Interact_NoAction.generated.h"

class AActor;
class UActivity_Interact_NoAction;
class UInteractiveComponent;

UCLASS(Blueprintable)
class ASF_API UActivity_Interact_NoAction : public UActivity_Interact {
    GENERATED_BODY()
public:
    UActivity_Interact_NoAction();

    UFUNCTION(BlueprintCallable)
    void OnInteractionIsNoMoreDoable(UInteractiveComponent* _InteractiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetResourceNeeded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionDuration();
    
    UFUNCTION(BlueprintCallable)
    static UActivity_Interact_NoAction* Create_Activity_Interact_NoAction_BP(TSubclassOf<UActivity_Interact_NoAction> _Activity_Interact_NoAction_Type, AActor* _Instigator, UInteractiveComponent* _InteractiveComponent);
    
};

