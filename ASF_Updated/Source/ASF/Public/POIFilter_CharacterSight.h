#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "POIFilter.h"
#include "POIFilter_CharacterSight.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_CharacterSight : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ChannelForVisibility;
    
public:
    UPOIFilter_CharacterSight();

};

