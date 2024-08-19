#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "FileManagementFunctionLibrary.generated.h"

class ULevel;
class UObject;
class UPrimaryDataAsset;

UCLASS(Blueprintable)
class ASF_API UFileManagementFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFileManagementFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool VerifyOrCreateDirectory(const FString& TestDir);
    
    UFUNCTION(BlueprintCallable)
    static void SyncBrowserToObjects(const TArray<FString>& AssetPaths);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevelLock(ULevel* Level, bool Lock);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveLoadedAsset(UObject* AssetToSave, bool bOnlyIfIsDirty);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveArrayText(const FString& _SaveDirectory, const FString& _FileName, TArray<FString> _SaveText, bool _AllowOverWriting);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UObject*> LoadAssets(const TArray<FString> DirectoryPath);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadAsset(const FString& AssetPath);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> ListAssets(const FString& DirectoryPath, bool bRecursive, bool bIncludeFolder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUpperCase(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLevelLocked(ULevel* Level);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetSubDirectories(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPrimaryDataAsset*> FindAllDataAssetOfType(TSubclassOf<UPrimaryDataAsset> _PDAClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesAssetExist(const FString& AssetPath);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteAsset_EditorOnly(const FString& AssetPathToDelete);
    
    UFUNCTION(BlueprintCallable)
    static bool CopySystemFile(const FString& SourceFile, const FString& TargetFile);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsolidateAssets(UObject* AssetToConsolidateTo, const TArray<UObject*>& AssetsToConsolidate);
    
    UFUNCTION(BlueprintCallable)
    static int32 CloseAllEditorsForAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckoutLoadedAsset(UObject* AssetToCheckout);
    
};

