#pragma once
#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "ASFProceduralMeshComponent.generated.h"

class UNavAreaBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFProceduralMeshComponent : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> TindaAreaClass;
    
    UASFProceduralMeshComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeComponent();
    
};

