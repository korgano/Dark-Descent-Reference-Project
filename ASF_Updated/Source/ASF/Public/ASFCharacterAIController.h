#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASFAIController.h"
#include "CharacterSightProperties.h"
#include "ASFCharacterAIController.generated.h"

class AActor;
class UStatComponent;

UCLASS(Blueprintable)
class ASF_API AASFCharacterAIController : public AASFAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatComponent* StatComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPathValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SavedDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestinationAcceptanceRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwatchAsk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverWatchAskActif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverWatch_LocationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OverWatch_ActorTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DestinationActorClass;
    
public:
    AASFCharacterAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentAimingDirection(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetOverWatchLocation(AActor* _ActorTarget, FVector _LocationTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetOverwatchAsk(bool _bOrientation_IsFollowing);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationToPosition(FVector Position, bool Rotate);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationToActor(AActor* Target, bool Rotate);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationAcceptanceRadius();
    
    UFUNCTION(BlueprintCallable)
    void SaveDestination();
    
    UFUNCTION(BlueprintCallable)
    void RestoreDestination();
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentAimingDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPathValide() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsOverwatchAskActif();
    
    UFUNCTION(BlueprintCallable)
    bool IsAimingAtLocation(FVector _TargetLocation, float _angleTolerance);
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetMeshLocationToAimAt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSavedDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOverwatchAsk();
    
    UFUNCTION(BlueprintCallable)
    FVector GetOverWatch_LocationTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestination(float& AcceptanceRadius) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCurrentAimingDirection();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCharacterSightProperties> GetControllerSight();
    
    UFUNCTION(BlueprintCallable)
    void DetachDestinationFromActor();
    
};

