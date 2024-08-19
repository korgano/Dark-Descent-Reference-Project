#pragma once
#include "CoreMinimal.h"
#include "Activity.h"
#include "EnumActionStatus.h"
#include "Activity_Interact.generated.h"

class UAction;
class UInteractiveComponent;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UActivity_Interact : public UActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> InteractingStateEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* InteractingEffect;
    
public:
    UActivity_Interact();

    UFUNCTION(BlueprintCallable)
    void SetInteractiveComponent(UInteractiveComponent* _InteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(UAction* _Action);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnded(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _InteractionStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractiveComponent* GetInteractiveComponent() const;
    
};

