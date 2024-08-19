#pragma once
#include "CoreMinimal.h"
#include "OnLoadFrontEndMapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLoadFrontEndMap, const FString&, MapName, const FString&, Options, bool, bShowLoadingScreen);

