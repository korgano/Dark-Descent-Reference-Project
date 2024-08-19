#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerPictureUpdatedEventDelegate.h"
#include "MainMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UMainMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPictureUpdatedEvent OnPlayerPictureUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VersionString;
    
    UMainMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDefaultFocus();
    
    UFUNCTION(BlueprintCallable)
    void GetAsyncPlayerPicture();
    
};

