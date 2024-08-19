#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "POIFilter.h"
#include "POIFilter_TargetSight.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_TargetSight : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ChannelForVisibility;
    
public:
    UPOIFilter_TargetSight();

};

