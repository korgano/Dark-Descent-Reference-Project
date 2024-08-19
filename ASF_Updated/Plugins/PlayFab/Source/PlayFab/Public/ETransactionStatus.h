#pragma once
#include "CoreMinimal.h"
#include "ETransactionStatus.generated.h"

UENUM(BlueprintType)
enum class ETransactionStatus : uint8 {
    pfenum_CreateCart,
    pfenum_Init,
    pfenum_Approved,
    pfenum_Succeeded,
    pfenum_FailedByProvider,
    pfenum_DisputePending,
    pfenum_RefundPending,
    pfenum_Refunded,
    pfenum_RefundFailed,
    pfenum_ChargedBack,
    pfenum_FailedByUber,
    pfenum_FailedByPlayFab,
    pfenum_Revoked,
    pfenum_TradePending,
    pfenum_Traded,
    pfenum_Upgraded,
    pfenum_StackPending,
    pfenum_Stacked,
    pfenum_Other,
    pfenum_Failed,
};

