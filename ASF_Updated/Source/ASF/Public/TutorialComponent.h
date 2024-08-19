#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_InGameTutoWidgetDelegate.h"
#include "TutorialComponent.generated.h"

class UInGameTutoWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UTutorialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InGameTutoWidget OnOpenTuto;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InGameTutoWidget OnCloseTuto;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InGameTutoWidget OnPreCloseTuto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInGameTutoWidget* TutorialWidget;
    
    UTutorialComponent(const FObjectInitializer& ObjectInitializer);

};

