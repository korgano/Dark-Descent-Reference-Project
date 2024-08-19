#pragma once
#include "CoreMinimal.h"
#include "ASFLevelScriptActorBase.h"
#include "ASFLevelScriptActor.generated.h"

class AASFGameState_TacticalMode;
class AActor;
class AExtractionTransport;
class ALevelSequenceActor;
class ULevelPrimaryDataAsset;
class UUserWidget;

UCLASS(Blueprintable)
class ASF_API AASFLevelScriptActor : public AASFLevelScriptActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* CurrentSequencer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelPrimaryDataAsset* LevelDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterGameplayMapLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* IntroWidget;
    
public:
    AASFLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SkipSequencer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCameraMissionOutro();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCameraMissionIntro();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedDeployMarines(AExtractionTransport* _Transport);
    
    UFUNCTION(BlueprintCallable)
    void OnAPC_Register(AASFGameState_TacticalMode* GameState, AExtractionTransport* ExtractionTransport);
    
    UFUNCTION(BlueprintCallable)
    void OnAPC_ArrivedAtStart(AActor* Runner);
    
    UFUNCTION(BlueprintCallable)
    void LeaveMissionDelayed();
    
    UFUNCTION(BlueprintCallable)
    void InitCameraAtEntryPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevelDataAsset() const;
    
    UFUNCTION(BlueprintCallable)
    void AskAPC_MoveToExit(const FString& nameExtractionTransport);
    
};

