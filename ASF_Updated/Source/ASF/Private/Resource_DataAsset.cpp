#include "Resource_DataAsset.h"

UResource_DataAsset::UResource_DataAsset() {
    this->ProductionValue = 1;
    this->PurchaseValue = 1;
    this->ScrapValue = 1;
}

FString UResource_DataAsset::GetIconAsRichText(const FString& _Suffix) const {
    return TEXT("");
}


