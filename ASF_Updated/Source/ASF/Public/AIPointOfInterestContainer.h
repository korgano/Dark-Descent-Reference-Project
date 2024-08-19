#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EnumPOIComputationPolicy.h"
#include "EnumPOIResearchType.h"
#include "Event_UAIPointOfInterestContainer_UAIPointOfInterestConfigDelegate.h"
#include "StructPOIResult.h"
#include "StructPOIResultData.h"
#include "AIPointOfInterestContainer.generated.h"

class UAIPointOfInterestConfig;
class UAIPointOfInterestContainer;
class UAIPointOfInterestVolatile;

UCLASS(Blueprintable)
class ASF_API UAIPointOfInterestContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIPointOfInterestContainer_UAIPointOfInterestConfig OnPOIAddedToContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIPointOfInterestContainer_UAIPointOfInterestConfig OnPOIRemoveFromContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIPointOfInterestConfig*> PointOfInterestConfig;
    
public:
    UAIPointOfInterestContainer();

    UFUNCTION(BlueprintCallable)
    void RemovePOI(UAIPointOfInterestConfig* _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPOI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetContainerPointOfInterestNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAIPointOfInterestConfig*> GetContainerPointOfInterest() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FStructPOIResult> GetAvailablePOI(UAIPointOfInterestVolatile* _RequestingPOI, const TArray<UAIPointOfInterestContainer*>& _Containers, EnumPOIResearchType RunMode, const FGameplayTagContainer& _Categories, const TMap<UAIPointOfInterestVolatile*, FStructPOIResultData>& _MappedResultData, bool& _PoiFound);
    
    UFUNCTION(BlueprintCallable)
    void GetActivePOI(const FGameplayTagContainer& _Categories, TArray<UAIPointOfInterestVolatile*>& _POIActive, TArray<FStructPOIResultData>& _POIActiveResultData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActivationPolicy(UAIPointOfInterestVolatile* _POIRequester, UAIPointOfInterestVolatile* _POIRequested, EnumPOIComputationPolicy& POIComputationPolicy, float& ActivationThreshold) const;
    
public:
    UFUNCTION(BlueprintCallable)
    UAIPointOfInterestConfig* FindOwner(UObject* _Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainPOI(UAIPointOfInterestConfig* _PointOfInterestConfig) const;
    
    UFUNCTION(BlueprintCallable)
    bool ContainOwner(UObject* _Owner);
    
    UFUNCTION(BlueprintCallable)
    void ContainerEnablePOI(UAIPointOfInterestVolatile* _PointOfInterest, float activationTime);
    
    UFUNCTION(BlueprintCallable)
    void ContainerDisablePOI(UAIPointOfInterestVolatile* _PointOfInterest);
    
    UFUNCTION(BlueprintCallable)
    void AddPOI(UAIPointOfInterestConfig* _PointOfInterestConfig);
    
};

