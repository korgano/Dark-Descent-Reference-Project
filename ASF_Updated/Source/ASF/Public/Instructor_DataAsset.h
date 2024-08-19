#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Instructor_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UInstructor_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExperienceEarned;
    
    UInstructor_DataAsset();

};

