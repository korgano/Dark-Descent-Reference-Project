#pragma once
#include "CoreMinimal.h"
#include "Activity.h"
#include "Activity_LeaveMission.generated.h"

class AExtractionTransport;

UCLASS(Blueprintable)
class ASF_API UActivity_LeaveMission : public UActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExtractionTransport* ExtractionTransport;
    
public:
    UActivity_LeaveMission();

    UFUNCTION(BlueprintCallable)
    void SetExtractionTransport(AExtractionTransport* _ExtractionTransport);
    
};

