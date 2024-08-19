#include "ASFDataTableFunctionLibrary.h"

UASFDataTableFunctionLibrary::UASFDataTableFunctionLibrary() {
}

int32 UASFDataTableFunctionLibrary::CountRowsInDataTable(UDataTable* DataTable) {
    return 0;
}

TArray<UClass*> UASFDataTableFunctionLibrary::BP_GetSpecifiedRowsInDataTable(UClass* OutputType, UDataTable* DataTable, const FGameplayTagContainer& Rows) {
    return TArray<UClass*>();
}

TMap<FName, UClass*> UASFDataTableFunctionLibrary::BP_GetAllRowsAsMapInDataTable(UDataTable* DataTable) {
    return TMap<FName, UClass*>();
}

TMap<FGameplayTag, UClass*> UASFDataTableFunctionLibrary::BP_GetAllRowsAsGameplayTagMapInDataTable(UDataTable* DataTable) {
    return TMap<FGameplayTag, UClass*>();
}

UClass* UASFDataTableFunctionLibrary::BP_Get_Row_In_DataTable(UClass* OutputType, UDataTable* DataTable, const FString& Key) {
    return NULL;
}

TArray<UClass*> UASFDataTableFunctionLibrary::BP_Get_AllRows_In_DataTable(UClass* OutputType, UDataTable* DataTable) {
    return TArray<UClass*>();
}


