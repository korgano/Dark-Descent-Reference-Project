#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIFilter.h"
#include "POIFilter_Weight_TargetDistrib.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Weight_TargetDistrib : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEnemyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetMarkerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* Weight_DistanceImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MultiplyDistanceImpact;
    
public:
    UPOIFilter_Weight_TargetDistrib();

};

