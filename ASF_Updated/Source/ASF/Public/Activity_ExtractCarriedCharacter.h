#pragma once
#include "CoreMinimal.h"
#include "Activity.h"
#include "Activity_ExtractCarriedCharacter.generated.h"

class AExtractionTransport;

UCLASS(Blueprintable)
class ASF_API UActivity_ExtractCarriedCharacter : public UActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExtractionTransport* ExtractionTransport;
    
public:
    UActivity_ExtractCarriedCharacter();

    UFUNCTION(BlueprintCallable)
    void SetExtractionTransport(AExtractionTransport* _ExtractionTransport);
    
};

