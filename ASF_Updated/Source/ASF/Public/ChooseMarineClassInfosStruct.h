#pragma once
#include "CoreMinimal.h"
#include "ChooseMarineClassInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FChooseMarineClassInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 marine_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString chosen_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString not_chosen_class;
    
    FChooseMarineClassInfosStruct();
};

