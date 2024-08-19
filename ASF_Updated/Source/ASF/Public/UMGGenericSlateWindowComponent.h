#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_GenericSlateWindowEventDelegate.h"
#include "Event_OnUMGGenericBuiltDelegate.h"
#include "Templates/SubclassOf.h"
#include "UMGGenericSlateWindowComponent.generated.h"

class AUMGGenericSlateWindowManager;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UUMGGenericSlateWindowComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> slateUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUMGGenericSlateWindowManager* SlateWindowManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* createdWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnUMGGenericBuilt OnUMGBuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GenericSlateWindowEvent UpdateSlateWindowUMG;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GenericSlateWindowEvent OnCloseSlateWindow;
    
    UUMGGenericSlateWindowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetManager(AUMGGenericSlateWindowManager* slateManager);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocalVariable();
    
    UFUNCTION(BlueprintCallable)
    void InitSlateWindow();
    
    UFUNCTION(BlueprintCallable)
    void DestroyComponent_Internal();
    
};

