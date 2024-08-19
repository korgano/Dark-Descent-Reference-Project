#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PowerOffLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPowerOffLightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerOffIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerOnIntensitySave;
    
    UPowerOffLightComponent(const FObjectInitializer& ObjectInitializer);

};

