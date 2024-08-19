#include "CSVGameInstanceSubsystem.h"

UCSVGameInstanceSubsystem::UCSVGameInstanceSubsystem() {
    this->CSV_Directory_AutoLoad = TEXT("Data/CSV/AutoLoad");
    this->CSV_Directory = TEXT("Data/CSV/");
}

void UCSVGameInstanceSubsystem::LoadAllCSV() {
}

void UCSVGameInstanceSubsystem::Load_CSV(const FString& Filename, UScriptStruct* Struct) {
}

FString UCSVGameInstanceSubsystem::GetRowAsTT(const FString& TableName, const FString& RowName) {
    return TEXT("");
}

float UCSVGameInstanceSubsystem::GetRowAsFloat(const FString& TableName, const FString& RowName) {
    return 0.0f;
}

TMap<FString, UDataTable*> UCSVGameInstanceSubsystem::GetDataTables() {
    return TMap<FString, UDataTable*>();
}

bool UCSVGameInstanceSubsystem::GetDataTableRowByNameWildcard(UCSVGameInstanceSubsystem* CSVSubSystem, FName TableName, FName RowName, FTableRowBase& Row) {
    return false;
}

void UCSVGameInstanceSubsystem::AutoLoad_CSV_KeyValue() {
}


