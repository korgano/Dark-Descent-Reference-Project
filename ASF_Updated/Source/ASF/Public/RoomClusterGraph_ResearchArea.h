#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomClusterGraph.h"
#include "RoomClusterGraph_ResearchArea.generated.h"

class URoomClusterGraph_ResearchArea_Data;

UCLASS(Blueprintable)
class ASF_API URoomClusterGraph_ResearchArea : public URoomClusterGraph {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URoomClusterGraph_ResearchArea_Data*> ResearchAreaData;
    
public:
    URoomClusterGraph_ResearchArea();

    UFUNCTION(BlueprintCallable)
    bool UpdateResearchArea(URoomClusterGraph_ResearchArea_Data* _ResearchAreaData, FVector _NewOrigin, float _NewRadius);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteResearchArea(URoomClusterGraph_ResearchArea_Data* _ResearchAreaData);
    
    UFUNCTION(BlueprintCallable)
    URoomClusterGraph_ResearchArea_Data* AddResearchAreaToGraph(FVector _Origin, float _Radius);
    
};

