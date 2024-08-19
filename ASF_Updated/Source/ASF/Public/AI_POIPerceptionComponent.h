#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EnumPOIResearchType.h"
#include "Event_PerceptionComponent_BoolDelegate.h"
#include "Event_PerceptionComponent_UPOIDefaultContainer_FGameplayTagDelegate.h"
#include "AI_POIPerceptionComponent.generated.h"

class AASFCharacter;
class AASFCharacterAIController;
class UAIPointOfInterestConfig;
class UAIPointOfInterestContainer;
class UAIPointOfInterestVolatile;
class UAI_POIAsyncSchedulerComponent;
class UPOIDefaultContainer;
class UPOIPerception_DataAsset;
class UPointOfInterest_DataAsset;
class UTask_AsyncPerception;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAI_POIPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PerceptionComponent_Bool Init;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PerceptionComponent_UPOIDefaultContainer_FGameplayTag OnPerceptionUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIPerception_DataAsset* POIPerception_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAI_POIAsyncSchedulerComponent* POIAsyncSchedulerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacterAIController* ASFCharacterAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestConfig* PerceptionSenseConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestConfig* PerceptionStimuliConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIDefaultContainer* POIPerceptionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UPOIDefaultContainer*> PerceptionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIDefaultContainer* SelfContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerceptionDisableForFrame;
    
public:
    UAI_POIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSight();
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdatePerceptionFromResult_Task(UTask_AsyncPerception*& _OutAsyncComputation, const TArray<FGameplayTag>& ResultTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception, bool _UseMultiThreading);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdatePerceptionFromResult(const TArray<FGameplayTag>& ResultTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdatePerceptionFromPool_Task(UTask_AsyncPerception*& _OutAsyncComputation, const TArray<FGameplayTag>& PoolTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception, bool _UseMultiThreading);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdatePerceptionFromPool(const TArray<FGameplayTag>& PoolTags, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdatePerception_Task(UTask_AsyncPerception*& _OutAsyncComputation, const TArray<UAIPointOfInterestContainer*>& PerceptionContainer, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception, bool _UseMultiThreading);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdatePerception(TArray<UAIPointOfInterestContainer*> PerceptionContainer, FGameplayTag _PerceptionSense, EnumPOIResearchType RunMode, const FGameplayTagContainer& EmitterCategories, bool _GenerateEvent, bool _NeedPerception);
    
    UFUNCTION(BlueprintCallable)
    void SwapPOIContainer(UPOIDefaultContainer* _Container);
    
    UFUNCTION(BlueprintCallable)
    void SetPOIPerceptionContainer(UPOIDefaultContainer* _POIPerceptionContainer);
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* LateUpdatePerception(UTask_AsyncPerception* _AsyncPerception);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPOIPerceptionEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInit() const;
    
    UFUNCTION(BlueprintCallable)
    void InitPOIPerception(UPOIPerception_DataAsset* _POIPerception_DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSense(FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable)
    UAIPointOfInterestVolatile* GetStimuli(FGameplayTag StimuliTag);
    
    UFUNCTION(BlueprintCallable)
    UAIPointOfInterestVolatile* GetSense(FGameplayTag SenseTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPOIDefaultContainer* GetSelfContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPOIDefaultContainer* GetPOIPerceptionContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAI_POIAsyncSchedulerComponent* GetPOIAsyncSchedulerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestConfig* GetPerceptionStimuliConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestConfig* GetPerceptionSenseConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPOIDefaultContainer* GetPerceptionResult(FGameplayTag _PerceptionSense) const;
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* GetInitPerceptionResult(FGameplayTag _PerceptionSense);
    
    UFUNCTION(BlueprintCallable)
    void EnablePOIPerception();
    
private:
    UFUNCTION(BlueprintCallable)
    void EnablePerception();
    
public:
    UFUNCTION(BlueprintCallable)
    void DisablePOIPerception();
    
    UFUNCTION(BlueprintCallable)
    void DisablePerceptionForFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPOIDefaultContainer* ComputePerception(FGameplayTag __PerceptionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputeAllPerceptions();
    
    UFUNCTION(BlueprintCallable)
    void ClearPerceptionResult(FGameplayTag _PerceptionSense);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPerceive(const FGameplayTag& _PerceptionTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPerceptionCooldown(FGameplayTag PerceptionTag);
    
    UFUNCTION(BlueprintCallable)
    void AddPOIPerception(UPOIPerception_DataAsset* _POIPerception_DataAsset, UPointOfInterest_DataAsset* NewPerception_DataAsset);
    
};

