#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InfluenceMapWeigherComponent.h"
#include "InfluenceMapWeigher_FOWDrawer.generated.h"

class AInfluenceMapManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInfluenceMapWeigher_FOWDrawer : public UInfluenceMapWeigherComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionPolygonRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastUpdatePosition;
    
public:
    UInfluenceMapWeigher_FOWDrawer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInfluenceMapUpdated(AInfluenceMapManager* _InfluenceMapManager);
    
};

