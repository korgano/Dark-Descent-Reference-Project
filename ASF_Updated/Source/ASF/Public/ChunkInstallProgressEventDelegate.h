#pragma once
#include "CoreMinimal.h"
#include "ChunkInstallProgressEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChunkInstallProgressEvent, float, Progress);

