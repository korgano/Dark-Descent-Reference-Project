#pragma once
#include "CoreMinimal.h"
#include "EnnemyTrackingComponent.h"
#include "AlienTrackingComponent.generated.h"

class UHiveJammer_XenoTech_DataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAlienTrackingComponent : public UEnnemyTrackingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHiveJammer_XenoTech_DataAsset* XenoTechDataAsset;
    
public:
    UAlienTrackingComponent(const FObjectInitializer& ObjectInitializer);

};

