#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RoomInGameDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASF_API URoomInGameDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoomName;
    
    URoomInGameDataAsset();

};

