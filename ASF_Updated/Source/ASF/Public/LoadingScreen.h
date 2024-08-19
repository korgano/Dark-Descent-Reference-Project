#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadingTip.h"
#include "LoadingScreen.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API ULoadingScreen : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> UnloadedLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> LoadedLevelList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNarrativeDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadingTip> LoadingTips;
    
    ULoadingScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoadingTips();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingProgress(float Progress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Bind();
    
};

