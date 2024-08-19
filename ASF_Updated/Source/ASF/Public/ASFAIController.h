#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Event_AASFAIControllerDelegate.h"
#include "ASFAIController.generated.h"

class UAIStateManager;
class UAI_POIPerceptionComponent;

UCLASS(Blueprintable)
class ASF_API AASFAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AASFAIController OnPerceptionUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAI_POIPerceptionComponent* POIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisabledPerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddedPerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> AvailablePerception;
    
public:
    AASFAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePerception_Internal(const FGameplayTagContainer& _PerceptionToEnable, const FGameplayTagContainer& _PerceptionToDisable);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdatePerception();
    
    UFUNCTION(BlueprintCallable)
    void RemovePerceptions(const FGameplayTagContainer& _PerceptionToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerceptionAvailable(FGameplayTag _PerceptionTag) const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePartialRepath(FVector _RepathDest);
    
    UFUNCTION(BlueprintCallable)
    UAI_POIPerceptionComponent* GetPOIPerceptionComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetDisabledPerception() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentStatePerception(FGameplayTagContainer& PerceptionEnable, FGameplayTagContainer& PerceptionDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, bool> GetAvaillablePerceptionMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIStateManager* GetAiStateManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAddedPerception() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePerceptions(const FGameplayTagContainer& _PerceptionToEnable);
    
    UFUNCTION(BlueprintCallable)
    void DisablePerceptions(const FGameplayTagContainer& _PerceptionToDisable);
    
    UFUNCTION(BlueprintCallable)
    void AddPerceptions(const FGameplayTagContainer& _PerceptionToAdd);
    
};

