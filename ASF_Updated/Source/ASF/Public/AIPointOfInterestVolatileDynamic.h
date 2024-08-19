#pragma once
#include "CoreMinimal.h"
#include "AIPointOfInterestVolatile.h"
#include "AIPointOfInterestVolatileDynamic.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API UAIPointOfInterestVolatileDynamic : public UAIPointOfInterestVolatile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
public:
    UAIPointOfInterestVolatileDynamic();

};

