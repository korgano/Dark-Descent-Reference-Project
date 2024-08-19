#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SquadComponent.generated.h"

class ASquad;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USquadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
    USquadComponent(const FObjectInitializer& ObjectInitializer);

};

