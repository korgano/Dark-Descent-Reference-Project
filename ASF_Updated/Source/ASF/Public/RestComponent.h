#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_Rest_PhaseDelegate.h"
#include "RestComponent.generated.h"

class URest_DataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGalvanizingPresence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URest_DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTryAmbushOnNextRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSucceedAmbushOnNextRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbushSpawnProbability;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Rest_Phase OnRestPhaseStarting;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Rest_Phase OnRestPhaseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Rest_Phase OnRestPhaseEnding;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Rest_Phase OnRestPhaseEnded;
    
    URestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRestPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldTryAmbushOnNextRest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSpawnAmbush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForceAmbushOnNextRest() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldTryAmbushOnNextRest(bool ShouldTryAmbush, bool ForceSucceedAmbush);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResolveRestEnding();
    
    UFUNCTION(BlueprintCallable)
    void ResetAmbushProperties();
    
    UFUNCTION(BlueprintCallable)
    void PlayBlackScreenSound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndRestPhase();
    
    UFUNCTION(BlueprintCallable)
    int32 ComputeAmbushSpawnProbability();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompleteRestPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyRestEffects();
    
};

