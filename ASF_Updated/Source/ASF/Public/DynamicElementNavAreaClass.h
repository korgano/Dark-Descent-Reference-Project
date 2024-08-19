#pragma once
#include "CoreMinimal.h"
#include "EnumGraphPolyDiplomacy.h"
#include "DynamicElementNavAreaClass.generated.h"

class UNavArea;
class URoomGraph_RoomDynamicElement;

USTRUCT(BlueprintType)
struct ASF_API FDynamicElementNavAreaClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumGraphPolyDiplomacy GraphPolyDiplomacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UNavArea>> DynamicElementNavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URoomGraph_RoomDynamicElement> RoomDynamicElementClass;
    
    FDynamicElementNavAreaClass();
};

