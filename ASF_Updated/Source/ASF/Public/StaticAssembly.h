#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticAssembly.generated.h"

UCLASS(Blueprintable)
class ASF_API AStaticAssembly : public AActor {
    GENERATED_BODY()
public:
    AStaticAssembly(const FObjectInitializer& ObjectInitializer);

};

