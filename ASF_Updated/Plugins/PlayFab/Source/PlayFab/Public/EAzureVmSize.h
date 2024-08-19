#pragma once
#include "CoreMinimal.h"
#include "EAzureVmSize.generated.h"

UENUM(BlueprintType)
enum class EAzureVmSize : uint8 {
    pfenum_Standard_A1,
    pfenum_Standard_A2,
    pfenum_Standard_A3,
    pfenum_Standard_A4,
    pfenum_Standard_A1_v2,
    pfenum_Standard_A2_v2,
    pfenum_Standard_A4_v2,
    pfenum_Standard_A8_v2,
    pfenum_Standard_D1_v2,
    pfenum_Standard_D2_v2,
    pfenum_Standard_D3_v2,
    pfenum_Standard_D4_v2,
    pfenum_Standard_D5_v2,
    pfenum_Standard_D2_v3,
    pfenum_Standard_D4_v3,
    pfenum_Standard_D8_v3,
    pfenum_Standard_D16_v3,
    pfenum_Standard_F1,
    pfenum_Standard_F2,
    pfenum_Standard_F4,
    pfenum_Standard_F8,
    pfenum_Standard_F16,
    pfenum_Standard_F2s_v2,
    pfenum_Standard_F4s_v2,
    pfenum_Standard_F8s_v2,
    pfenum_Standard_F16s_v2,
    pfenum_Standard_D2as_v4,
    pfenum_Standard_D4as_v4,
    pfenum_Standard_D8as_v4,
    pfenum_Standard_D16as_v4,
    pfenum_Standard_D2a_v4,
    pfenum_Standard_D4a_v4,
    pfenum_Standard_D8a_v4,
    pfenum_Standard_D16a_v4,
    pfenum_Standard_E2a_v4,
    pfenum_Standard_E4a_v4,
    pfenum_Standard_E8a_v4,
    pfenum_Standard_E16a_v4,
    pfenum_Standard_E2as_v4,
    pfenum_Standard_E4as_v4,
    pfenum_Standard_E8as_v4,
    pfenum_Standard_E16as_v4,
    pfenum_Standard_D2s_v3,
    pfenum_Standard_D4s_v3,
    pfenum_Standard_D8s_v3,
    pfenum_Standard_D16s_v3,
    pfenum_Standard_DS1_v2,
    pfenum_Standard_DS2_v2,
    pfenum_Standard_DS3_v2,
    pfenum_Standard_DS4_v2,
    pfenum_Standard_DS5_v2,
    pfenum_Standard_NC4as_T4_v3,
    pfenum_Standard_D2d_v4,
    pfenum_Standard_D4d_v4,
    pfenum_Standard_D8d_v4,
    pfenum_Standard_D16d_v4,
    pfenum_Standard_D2ds_v4,
    pfenum_Standard_D4ds_v4,
    pfenum_Standard_D8ds_v4,
    pfenum_Standard_D16ds_v4,
    pfenum_Standard_HB120_16rs_v3,
    pfenum_Standard_HB120_32rs_v3,
    pfenum_Standard_HB120_64rs_v3,
    pfenum_Standard_HB120_96rs_v3,
    pfenum_Standard_HB120rs_v3,
};

