#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ASFDataTableFunctionLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ASF_API UASFDataTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UASFDataTableFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CountRowsInDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UClass*> BP_GetSpecifiedRowsInDataTable(UClass* OutputType, UDataTable* DataTable, const FGameplayTagContainer& Rows);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, UClass*> BP_GetAllRowsAsMapInDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FGameplayTag, UClass*> BP_GetAllRowsAsGameplayTagMapInDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static UClass* BP_Get_Row_In_DataTable(UClass* OutputType, UDataTable* DataTable, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UClass*> BP_Get_AllRows_In_DataTable(UClass* OutputType, UDataTable* DataTable);
    
};

