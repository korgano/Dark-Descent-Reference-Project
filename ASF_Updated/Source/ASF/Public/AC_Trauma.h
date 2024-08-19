#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Event_Humanoid_Trauma_TraumaDelegate.h"
#include "TraumaApplied.h"
#include "AC_Trauma.generated.h"

class AHumanoid;
class UTraumaHandler_DataAsset;
class UTrauma_DataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAC_Trauma : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Humanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTraumaHandler_DataAsset* PDA_TraumaHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTraumaApplied Trauma;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Humanoid_Trauma_Trauma OnTraumaChanged;
    
    UAC_Trauma(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveTrauma();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseTraumaPoint(int32 _TraumaPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTraumaPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrauma(const FGameplayTag& _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTrauma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTraumaApplied GetTrauma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalTraumaPoints() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseTraumaPoint(int32 _TraumaPoint);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTraumasAutoHealTurn();
    
    UFUNCTION(BlueprintCallable)
    void ApplyTrauma(const FTraumaApplied& _Trauma);
    
    UFUNCTION(BlueprintCallable)
    void AddTraumaWithForcedTurnAutoHeal(UTrauma_DataAsset* _Trauma, int32 _ForcedTurnAutoHeal);
    
    UFUNCTION(BlueprintCallable)
    void AddTrauma(const FTraumaApplied& _Trauma);
    
};

