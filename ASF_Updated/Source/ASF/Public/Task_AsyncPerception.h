#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EnumPOIResearchType.h"
#include "OnPerceptionComputedDelegate.h"
#include "StructPOIResult.h"
#include "Task_AsyncPerception.generated.h"

class UAIPointOfInterestContainer;
class UAIPointOfInterestVolatile;
class UAI_POIAsyncSchedulerComponent;
class UAI_POIPerceptionComponent;
class UPOIDefaultContainer;
class UTask_AsyncPerception;

UCLASS(Blueprintable)
class ASF_API UTask_AsyncPerception : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerceptionComputed OnPerceptionComputed_BP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCpp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAI_POIPerceptionComponent* POIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAI_POIAsyncSchedulerComponent* POIAsyncSchedulerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PerceptionSenseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestVolatile* PerceptionSense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIDefaultContainer* ResultContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIPointOfInterestContainer*> PerceptionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructPOIResult> PointOfInterestResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIResearchType RunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EmitterCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HadResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedAsyncAboart;
    
public:
    UTask_AsyncPerception();

    UFUNCTION(BlueprintCallable)
    static UTask_AsyncPerception* WaitPerceptionResult_BP(UTask_AsyncPerception* AsyncPerception);
    
    UFUNCTION(BlueprintCallable)
    void SetPOIAsyncSchedulerComponent(UAI_POIAsyncSchedulerComponent* _POIAsyncSchedulerComponent);
    
    UFUNCTION(BlueprintCallable)
    void ResultComputed();
    
    UFUNCTION(BlueprintCallable)
    void ResultAborted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated_BP(UTask_AsyncPerception* _AsyncPerception);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(UTask_AsyncPerception* _AsyncPerception);
    
public:
    UFUNCTION(BlueprintCallable)
    UAIPointOfInterestVolatile* InitAsyncPerception(UAI_POIPerceptionComponent* _POIPerceptionComponent, const TArray<UAIPointOfInterestContainer*>& _PerceptionContainer, FGameplayTag _PerceptionSenseTag, EnumPOIResearchType _RunMode, const FGameplayTagContainer& _EmitterCategories, bool _GenerateEvent, bool _bIsAsync);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPOIDefaultContainer* GetResultContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAI_POIPerceptionComponent* GetPOIPerceptionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPerceptionSenseTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestVolatile* GetPerceptionSense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAsync() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHadResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGenerateEvent() const;
    
    UFUNCTION(BlueprintCallable)
    bool ComputePerception();
    
    UFUNCTION(BlueprintCallable)
    void ClearAsyncPerceptionTask();
    
    UFUNCTION(BlueprintCallable)
    void AbortAsynchPerception();
    
};

