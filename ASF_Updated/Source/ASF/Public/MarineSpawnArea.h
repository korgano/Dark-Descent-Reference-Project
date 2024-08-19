#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "MarineSpawnArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ASF_API AMarineSpawnArea : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
public:
    AMarineSpawnArea(const FObjectInitializer& ObjectInitializer);

};

