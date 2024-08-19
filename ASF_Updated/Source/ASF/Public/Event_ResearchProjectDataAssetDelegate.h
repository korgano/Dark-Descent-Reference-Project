#pragma once
#include "CoreMinimal.h"
#include "Event_ResearchProjectDataAssetDelegate.generated.h"

class UBM_ResearchProject_DataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ResearchProjectDataAsset, UBM_ResearchProject_DataAsset*, ResearchAsset);

