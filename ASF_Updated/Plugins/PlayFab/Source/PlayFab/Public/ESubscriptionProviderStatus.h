#pragma once
#include "CoreMinimal.h"
#include "ESubscriptionProviderStatus.generated.h"

UENUM(BlueprintType)
enum class ESubscriptionProviderStatus : uint8 {
    pfenum_NoError,
    pfenum_Cancelled,
    pfenum_UnknownError,
    pfenum_BillingError,
    pfenum_ProductUnavailable,
    pfenum_CustomerDidNotAcceptPriceChange,
    pfenum_FreeTrial,
    pfenum_PaymentPending,
};

