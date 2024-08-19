#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "StructDataCollection.h"
#include "AIPointOfInterestConfig.generated.h"

class AGameStateBase;
class UAIPointOfInterestContainer;
class UAIPointOfInterestVolatile;
class UPointOfInterestConfig_DataAsset;
class UPointOfInterest_DataAsset;

UCLASS(Blueprintable)
class ASF_API UAIPointOfInterestConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestVolatile* DominantPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructDataCollection DataCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAIPointOfInterestVolatile*> PointOfInterests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIPointOfInterestContainer*> AIPointOfInterestContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CategoryWaitingToInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SourceObjectWaitingToInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DurationWaitingToInit;
    
public:
    UAIPointOfInterestConfig();

    UFUNCTION(BlueprintCallable)
    void RebuildPOI();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTindaWorldTimeInitialized(AGameStateBase* GameState, float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPOI(UObject* _Owner, FVector _WorldLocation, UPointOfInterestConfig_DataAsset* _PointOfInterestConfig_DataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestVolatile* GetPointOfInterest(FGameplayTag _POITag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestVolatile* GetDominantPOI() const;
    
    UFUNCTION(BlueprintCallable)
    void GetContainer(TArray<UAIPointOfInterestContainer*>& _POIContainers);
    
    UFUNCTION(BlueprintCallable)
    void ConfigEnablePOI(FGameplayTag _Category, UObject* _Source, float _Duration);
    
    UFUNCTION(BlueprintCallable)
    void ConfigDisablePOI(FGameplayTag _Category);
    
    UFUNCTION(BlueprintCallable)
    void ConfigDisableAllPOI();
    
    UFUNCTION(BlueprintCallable)
    void BuildPOIConfig(FVector _WorldLocation, UPointOfInterestConfig_DataAsset* _PointOfInterestConfig_DataAsset, UPointOfInterest_DataAsset* poi_dataAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddContainer(UAIPointOfInterestContainer* _Container);
    
};

