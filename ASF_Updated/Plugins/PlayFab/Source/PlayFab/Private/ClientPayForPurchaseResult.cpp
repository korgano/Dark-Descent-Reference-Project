#include "ClientPayForPurchaseResult.h"

FClientPayForPurchaseResult::FClientPayForPurchaseResult() {
    this->CreditApplied = 0;
    this->PurchasePrice = 0;
    this->Status = ETransactionStatus::pfenum_CreateCart;
    this->VCAmount = NULL;
    this->VirtualCurrency = NULL;
}

