#pragma once
#include "CoreMinimal.h"
#include "RoomHasModifieDelegate.generated.h"

class ARoomCluster;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRoomHasModifie, ARoomCluster*, _RoomCluster, int32, RoomId);

