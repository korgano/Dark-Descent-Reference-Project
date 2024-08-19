#pragma once
#include "CoreMinimal.h"
#include "AIPointOfInterestContainer.h"
#include "StructPOIResult.h"
#include "StructPOIResultData.h"
#include "POIDefaultContainer.generated.h"

class UAIPointOfInterestConfig;
class UAIPointOfInterestVolatile;

UCLASS(Blueprintable)
class ASF_API UPOIDefaultContainer : public UAIPointOfInterestContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructPOIResultData> PointOfInterestResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAIPointOfInterestVolatile*, FStructPOIResultData> PointOfInterestMappedResultData;
    
public:
    UPOIDefaultContainer();

    UFUNCTION(BlueprintCallable)
    void SetPointOfInterestResult(const TArray<FStructPOIResult>& _PointOfInterestResult);
    
    UFUNCTION(BlueprintCallable)
    void SetPointOfInterest(const TArray<UAIPointOfInterestConfig*>& _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FStructPOIResultData> GetPointOfInterestResultData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UAIPointOfInterestVolatile*, FStructPOIResultData> GetPointOfInterestMappedResultData() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPointOfInterest();
    
};

