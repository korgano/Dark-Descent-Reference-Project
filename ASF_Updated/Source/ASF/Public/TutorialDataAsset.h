#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Tutorial.h"
#include "TutorialDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UTutorialDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorial> Tutorials;
    
    UTutorialDataAsset();

};

