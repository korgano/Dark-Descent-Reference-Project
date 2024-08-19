#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DataMove.h"
#include "Templates/SubclassOf.h"
#include "Action_Interaction.generated.h"

class AActor;
class UAction_Interaction;
class UInteractiveComponent;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UAction_Interaction : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* InteractiveComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* InteractingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* FutureCharacterInteractionEffect;
    
public:
    UAction_Interaction();

    UFUNCTION(BlueprintCallable)
    void OnInteractionIsNoMoreDoable(UInteractiveComponent* _InteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    static UAction_Interaction* Create_Action_Interaction(AActor* _Context, TSubclassOf<UAction_Interaction> _ActionClass, FDataMove _DataMove, UInteractiveComponent* _InteractiveComponent);
    
};

