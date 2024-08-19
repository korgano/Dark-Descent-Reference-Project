#pragma once
#include "CoreMinimal.h"
#include "AIPointOfInterestVolatile.h"
#include "AIPointOfInterestVolatile_Chara.generated.h"

class AASFCharacter;

UCLASS(Blueprintable)
class ASF_API UAIPointOfInterestVolatile_Chara : public UAIPointOfInterestVolatile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* ASFCharacter;
    
public:
    UAIPointOfInterestVolatile_Chara();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFCharacter* GetASFCharacter() const;
    
};

