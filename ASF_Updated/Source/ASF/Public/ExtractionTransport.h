#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMovementOrderFrom.h"
#include "EVoiceProfile.h"
#include "EnumDestroyReason.h"
#include "EnumNavigationFeedbackType.h"
#include "Event_ExtractiontransportDelegate.h"
#include "Event_Extractiontransport_HumanoidDelegate.h"
#include "ItemSpawned.h"
#include "ExtractionTransport.generated.h"

class AASFCharacter;
class AASFGameState_TacticalMode;
class ACharacter;
class UAudioComponent;

UCLASS(Blueprintable)
class ASF_API AExtractionTransport : public AItemSpawned {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CurrentSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString extractionTransportName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PilotVoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoiceProfile PiloteVoiceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool inLeaveMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDestroyReason ReasonWhenLeaveWithTransport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumNavigationFeedbackType EnumNavigationFeedbackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterAsExtractionTransport;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Extractiontransport Event_OnFinishedDeployMarines;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Extractiontransport_Humanoid Event_HumanoidLeftTransport;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Extractiontransport_Humanoid Event_HumanoidEnteredTransport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> LeavingAPC_Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> EnteringAPC_Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMovementOrderFrom LastMovementOrder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHumanoidShouldCrouch;
    
public:
    AExtractionTransport(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReserveEntrance();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseEntrance();
    
    UFUNCTION(BlueprintCallable)
    void OnPilotVoiceAudioFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActiveSubLevelChanged(AASFGameState_TacticalMode* GameState, const FString& ExtractionTransportType, const FString& ActiveSubLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakeMarineLeaveAPC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LeaveMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntranceReserved() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRemovedFromPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAddedToPlay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSubLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetInteractionTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetClosestAccessPoint(ACharacter* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAPCLeavingFormationPoint(const int32 ID, FVector& LocationToRotate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAPCEnteringFormationPoint(const int32 ID, FVector& LocationToRotate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterOrLeaveTransport(bool Enter, AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AskCameraFollow(bool _Ask, int32 _CameraIndex);
    
};

