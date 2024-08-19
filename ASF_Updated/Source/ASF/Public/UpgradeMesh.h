#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGender.h"
#include "UpgradeMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FUpgradeMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GearTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGender, TSoftObjectPtr<USkeletalMesh>> GenderedMesh;
    
    ASF_API FUpgradeMesh();
};

