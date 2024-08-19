#pragma once
#include "CoreMinimal.h"
#include "ExtractionTransport.h"
#include "APC.generated.h"

UCLASS(Blueprintable)
class ASF_API AAPC : public AExtractionTransport {
    GENERATED_BODY()
public:
    AAPC(const FObjectInitializer& ObjectInitializer);

};

