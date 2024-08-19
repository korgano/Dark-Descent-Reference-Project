#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomMissionPhase.h"
#include "GameplayAction_EventDelegate.h"
#include "GameplayAction_Event_Int32Delegate.h"
#include "GameplayTwinReference.h"
#include "GameplayAction.generated.h"

class AActor;
class AGameplayEvent;
class UAcknow_DataAsset;

UCLASS(Blueprintable)
class ASF_API UGameplayAction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionLabel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayEvent* OwnerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCloseMinimap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAction_Event OnGameplayActionEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeRelaunchOnLoadIfNotFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameplayActionStatut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAction_Event_Int32 OnGAStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomMissionPhase> PhaseWhenNeededToReActivateOnLoad;
    
    UGameplayAction();

    UFUNCTION(BlueprintCallable)
    void StartAction();
    
    UFUNCTION(BlueprintCallable)
    void SetGAStatus(int32 NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetActionLabel(const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActionLabel() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishGameplayAction(bool bWithError);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckValidityGA() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckValidityAcknow(UAcknow_DataAsset* Dialogue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTwinValidity(const FGameplayTwinReference& TwinRef) const;
    
};

