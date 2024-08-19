#pragma once
#include "CoreMinimal.h"
#include "GraphDynamicElementBP.generated.h"

UENUM(BlueprintType)
enum class GraphDynamicElementBP : uint8 {
    GRAPH_ENTRANCE,
    GRAPH_COVER,
    GRAPH_CROSSABLE,
    GRAPH_COVER_HIGHT,
    GRAPH_VISIBLE,
    GRAPH_DYNAMIC_ELEMENT_MAX UMETA(Hidden),
};

