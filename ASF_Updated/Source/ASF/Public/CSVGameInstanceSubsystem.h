#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/DataTable.h"
#include "CSVGameInstanceSubsystem.generated.h"

class UCSVGameInstanceSubsystem;
class UDataTable;
class UScriptStruct;

UCLASS(Blueprintable)
class ASF_API UCSVGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CSV_Directory_AutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CSV_Directory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UDataTable*> DataTables;
    
public:
    UCSVGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void LoadAllCSV();
    
    UFUNCTION(BlueprintCallable)
    void Load_CSV(const FString& Filename, UScriptStruct* Struct);
    
    UFUNCTION(BlueprintCallable)
    FString GetRowAsTT(const FString& TableName, const FString& RowName);
    
    UFUNCTION(BlueprintCallable)
    float GetRowAsFloat(const FString& TableName, const FString& RowName);
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, UDataTable*> GetDataTables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDataTableRowByNameWildcard(UCSVGameInstanceSubsystem* CSVSubSystem, FName TableName, FName RowName, FTableRowBase& Row);
    
    UFUNCTION(BlueprintCallable)
    void AutoLoad_CSV_KeyValue();
    
};

