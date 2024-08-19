#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TraumaHandlerComponent.generated.h"

class UTraumaHandler_DataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UTraumaHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTraumaHandler_DataAsset* PDA_TraumaHandler;
    
    UTraumaHandlerComponent(const FObjectInitializer& ObjectInitializer);

};

