#pragma once
#include "CoreMinimal.h"
#include "EnemyKilledInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FEnemyKilledInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString marine_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString enemy_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString enemy_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString death_cause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool critical_hit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double time_die;
    
    FEnemyKilledInfosStruct();
};

