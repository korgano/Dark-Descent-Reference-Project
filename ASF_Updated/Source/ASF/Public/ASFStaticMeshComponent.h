#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ProceduralMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "ASFStaticMeshComponent.generated.h"

class UNavAreaBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> TindaAreaClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProcMeshSection> ProcMeshSections;
    
    UASFStaticMeshComponent();

    UFUNCTION()
    void SetMeshSectionsFromProcedural(TArray<FProcMeshSection> NewProcMesh);
    
};

