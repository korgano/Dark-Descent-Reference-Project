#pragma once
#include "CoreMinimal.h"
#include "Event_DataAsset.h"
#include "Event_SoClose_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_SoClose_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UEvent_SoClose_DataAsset();

};

