#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UMGGenericSlateWindowManager.generated.h"

class UUMGGenericSlateWindowComponent;

UCLASS(Blueprintable)
class ASF_API AUMGGenericSlateWindowManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUMGGenericSlateWindowComponent*> SlateWindows;
    
    AUMGGenericSlateWindowManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReleaseScreen(int32 Monitor);
    
    UFUNCTION(BlueprintCallable)
    void InitMonitorInfo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAndTakeFreeScreen();
    
};

