#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIPointOfInterestVolatile_Chara.h"
#include "AIPOIVolatile_Chara_CoverOnPath.generated.h"

UCLASS(Blueprintable)
class ASF_API UAIPOIVolatile_Chara_CoverOnPath : public UAIPointOfInterestVolatile_Chara {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplineLocation;
    
public:
    UAIPOIVolatile_Chara_CoverOnPath();

};

