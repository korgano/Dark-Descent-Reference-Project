#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LD_ST_Props.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASF_API ALD_ST_Props : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    ALD_ST_Props(const FObjectInitializer& ObjectInitializer);

};

