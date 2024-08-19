#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "EnumSplineSegmentTravelMethod.h"
#include "EnumSplineSegmentTravelType.h"
#include "RailPointData.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FRailPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumSplineSegmentTravelType TravelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumSplineSegmentTravelMethod TravelMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve SpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepSettingsUntilNextExplicitPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLastSegment;
    
    FRailPointData();
};

