#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "DialogWidget.h"
#include "ASFGameViewportClient.generated.h"

class ULoadingScreen;

UCLASS(Blueprintable, NonTransient)
class ASF_API UASFGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogWidget> DialogWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadingScreen* LoadingScreenUserWidget;
    
public:
    UASFGameViewportClient();

};

