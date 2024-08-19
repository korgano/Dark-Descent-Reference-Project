#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "CommandPointAttribute_DataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class ASF_API UCommandPointAttribute_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> CommandPointIncreasePerSquadMember;
    
    UCommandPointAttribute_DataAsset();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FText GetMarineCount(const UObject* WorldContextObject) const;
    
};

