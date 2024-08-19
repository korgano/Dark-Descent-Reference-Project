#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "BoxTransform.h"
#include "OpenDataWidget.h"
#include "Terminal.generated.h"

class ASubLevelHandler;
class UInteractiveComponent;
class UMapFeedbackDataProperties;
class UStaticMesh;
class UTerminal_DataAsset;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ATerminal : public AActorWithGameplayTag, public IOpenDataWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerminal_DataAsset* PDA_Terminal;
    
public:
    ATerminal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateInteractionTagState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetTerminalMesh(UStaticMesh* _Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBoxInteractionPosition(FBoxTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetArrowHandInteractionPosition(FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetArrowFootInteractionPosition(FTransform Transform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnNewEffectActivated(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActiveInteractionChanged(UInteractiveComponent* _InteractiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLinkedObjectMaxDistance();
    

    // Fix for true pure virtual functions not being implemented
};

