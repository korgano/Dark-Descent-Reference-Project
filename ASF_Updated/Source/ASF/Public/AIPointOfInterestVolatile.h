#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIPointOfInterest.h"
#include "Event_PerceptionVolatile_UPOIDefaultContainerDelegate.h"
#include "StructDataCollection.h"
#include "StructDataCollection_Ptr.h"
#include "StructPOIResultData.h"
#include "AIPointOfInterestVolatile.generated.h"

class AGameStateBase;
class UAIPointOfInterestConfig;
class UAIPointOfInterestVolatile;
class UPOIDefaultContainer;
class UPOIFilter;
class UPointOfInterest_DataAsset;

UCLASS(Blueprintable)
class ASF_API UAIPointOfInterestVolatile : public UObject, public IAIPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PerceptionVolatile_UPOIDefaultContainer OnSenseUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDataModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeMultiThreaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UPOIFilter*> MapedFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestConfig* PointOfInterestConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterest_DataAsset* POIDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructDataCollection SelfDataCollection;
    
public:
    UAIPointOfInterestVolatile();

    UFUNCTION(BlueprintCallable)
    void UpdateDataBinder_Collection();
    
    UFUNCTION(BlueprintCallable)
    void TryCallPerceptionSenseUpdated(UPOIDefaultContainer* _PerceptionResult);
    
    UFUNCTION(BlueprintCallable)
    void SetPointOfInterestConfig(UAIPointOfInterestConfig* _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable)
    void SetOwner(UObject* _Owner);
    
    UFUNCTION(BlueprintCallable)
    void SetLocation(FVector _NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetExpirationTime(float _ExpirationTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDataAsset(UPointOfInterest_DataAsset* _POIDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnTindaWorldTimeInitialized(AGameStateBase* GameState, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool IsTaggedBy(const FGameplayTagContainer& _Categories);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPOIEnable() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsInteresting_int(UAIPointOfInterestVolatile* _InterestPoint, FStructPOIResultData& _InResultData, float& _InterestWeight);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInteresting(UAIPointOfInterestVolatile* _InterestPoint, FStructPOIResultData& _InResultData, float& _InterestWeight);
    
    UFUNCTION(BlueprintCallable)
    void InitPOI(UObject* _Owner, FVector _WorldLocation, FStructDataCollection_Ptr _DataCollection_Ptr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSaveResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestConfig* GetPointOfInterestConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetOwner() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMapedFilterValue(FGameplayTag FilterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasDataModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpirationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnabledTime() const;
    
    UFUNCTION(BlueprintCallable)
    UPointOfInterest_DataAsset* GetDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeMultiThreaded() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePOI(UObject* _Source);
    
    UFUNCTION(BlueprintCallable)
    void DisablePOI();
    
    UFUNCTION(BlueprintCallable)
    bool CanBeInterested();
    

    // Fix for true pure virtual functions not being implemented
};

