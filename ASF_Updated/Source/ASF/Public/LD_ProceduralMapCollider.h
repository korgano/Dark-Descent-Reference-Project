#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "LD_ProceduralMapCollider.generated.h"

class UProceduralMeshComponent;

UCLASS(Blueprintable)
class ASF_API ALD_ProceduralMapCollider : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* ProceduralMesh;
    
    ALD_ProceduralMapCollider(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GenerateParallelepiped(const TArray<FVector>& FaceA, const TArray<FVector>& FaceB);
    
};

