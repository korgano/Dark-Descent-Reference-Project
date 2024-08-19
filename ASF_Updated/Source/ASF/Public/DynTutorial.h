#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "DynTutorial.generated.h"

class UDynamicTutorial;

USTRUCT(BlueprintType)
struct FDynTutorial : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDynamicTutorial> TutorialClass;
    
    ASF_API FDynTutorial();
};

