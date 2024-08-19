#pragma once
#include "CoreMinimal.h"
#include "ASFPlayerController.h"
#include "ASFPlayerControllerMainMenu.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class ASF_API AASFPlayerControllerMainMenu : public AASFPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* AccessibilityMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EULA_Agreed;
    
    AASFPlayerControllerMainMenu(const FObjectInitializer& ObjectInitializer);

};

