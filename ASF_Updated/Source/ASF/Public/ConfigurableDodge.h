#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dodge.h"
#include "ConfigurableDodge.generated.h"

UCLASS(Blueprintable)
class ASF_API UConfigurableDodge : public UDodge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThreatLocation1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThreatLocation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
public:
    UConfigurableDodge();

    UFUNCTION(BlueprintCallable)
    void SetParams(FVector _Location, FVector _Direction, float _MinDistance);
    
};

