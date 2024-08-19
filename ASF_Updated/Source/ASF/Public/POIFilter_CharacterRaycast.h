#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "POIFilter.h"
#include "POIFilter_CharacterRaycast.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_CharacterRaycast : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool continueIfHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ChannelForVisibility;
    
public:
    UPOIFilter_CharacterRaycast();

};
