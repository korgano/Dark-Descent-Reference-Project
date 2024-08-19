#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFormationTypeEnum.h"
#include "EMovementTypeEnum.h"
#include "StructCursorHit.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStructCursorHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFormationTypeEnum FormationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementTypeEnum MovementType;
    
    ASF_API FStructCursorHit();
};

