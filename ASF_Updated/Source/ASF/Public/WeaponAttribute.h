#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponAttribute.generated.h"

class UWeaponAttribute_DataAsset;

USTRUCT(BlueprintType)
struct FWeaponAttribute : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponAttribute_DataAsset* WeaponAttribute;
    
    ASF_API FWeaponAttribute();
};

