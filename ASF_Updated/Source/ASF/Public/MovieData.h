#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MovieData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FMovieData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovieUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameRate;
    
    ASF_API FMovieData();
};

