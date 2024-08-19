#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OverwatchObject.h"
#include "Templates/SubclassOf.h"
#include "ObserveBleeps.generated.h"

class URoomClusterFilter;

UCLASS(Blueprintable)
class ASF_API UObserveBleeps : public UOverwatchObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> MovingElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> RoomClusterFilter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDistance;
    
public:
    UObserveBleeps();

};

