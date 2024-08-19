#pragma once
#include "CoreMinimal.h"
#include "EAzureVmFamily.generated.h"

UENUM(BlueprintType)
enum class EAzureVmFamily : uint8 {
    pfenum_A,
    pfenum_Av2,
    pfenum_Dv2,
    pfenum_Dv3,
    pfenum_F,
    pfenum_Fsv2,
    pfenum_Dasv4,
    pfenum_Dav4,
    pfenum_Eav4,
    pfenum_Easv4,
    pfenum_Ev4,
    pfenum_Esv4,
    pfenum_Dsv3,
    pfenum_Dsv2,
    pfenum_NCasT4_v3,
    pfenum_Ddv4,
    pfenum_Ddsv4,
    pfenum_HBv3,
};

