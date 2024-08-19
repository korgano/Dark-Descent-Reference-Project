#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SquadLocationInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FSquadLocationInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector squad_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Stress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float average_squad_hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 total_materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ammunition_remaining;
    
    FSquadLocationInfosStruct();
};

