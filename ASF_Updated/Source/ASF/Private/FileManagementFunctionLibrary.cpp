#include "FileManagementFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UFileManagementFunctionLibrary::UFileManagementFunctionLibrary() {
}

bool UFileManagementFunctionLibrary::VerifyOrCreateDirectory(const FString& TestDir) {
    return false;
}

void UFileManagementFunctionLibrary::SyncBrowserToObjects(const TArray<FString>& AssetPaths) {
}

void UFileManagementFunctionLibrary::SetLevelLock(ULevel* Level, bool Lock) {
}

bool UFileManagementFunctionLibrary::SaveLoadedAsset(UObject* AssetToSave, bool bOnlyIfIsDirty) {
    return false;
}

bool UFileManagementFunctionLibrary::SaveArrayText(const FString& _SaveDirectory, const FString& _FileName, TArray<FString> _SaveText, bool _AllowOverWriting) {
    return false;
}

void UFileManagementFunctionLibrary::OpenAsset(UObject* Asset) {
}

TArray<UObject*> UFileManagementFunctionLibrary::LoadAssets(const TArray<FString> DirectoryPath) {
    return TArray<UObject*>();
}

UObject* UFileManagementFunctionLibrary::LoadAsset(const FString& AssetPath) {
    return NULL;
}

TArray<FString> UFileManagementFunctionLibrary::ListAssets(const FString& DirectoryPath, bool bRecursive, bool bIncludeFolder) {
    return TArray<FString>();
}

bool UFileManagementFunctionLibrary::IsUpperCase(const FString& String) {
    return false;
}

bool UFileManagementFunctionLibrary::IsLevelLocked(ULevel* Level) {
    return false;
}

TArray<FString> UFileManagementFunctionLibrary::GetSubDirectories(const FString& Path) {
    return TArray<FString>();
}

TArray<UPrimaryDataAsset*> UFileManagementFunctionLibrary::FindAllDataAssetOfType(TSubclassOf<UPrimaryDataAsset> _PDAClass) {
    return TArray<UPrimaryDataAsset*>();
}

bool UFileManagementFunctionLibrary::DoesAssetExist(const FString& AssetPath) {
    return false;
}

bool UFileManagementFunctionLibrary::DeleteAsset_EditorOnly(const FString& AssetPathToDelete) {
    return false;
}

bool UFileManagementFunctionLibrary::CopySystemFile(const FString& SourceFile, const FString& TargetFile) {
    return false;
}

bool UFileManagementFunctionLibrary::ConsolidateAssets(UObject* AssetToConsolidateTo, const TArray<UObject*>& AssetsToConsolidate) {
    return false;
}

int32 UFileManagementFunctionLibrary::CloseAllEditorsForAsset(UObject* Asset) {
    return 0;
}

bool UFileManagementFunctionLibrary::CheckoutLoadedAsset(UObject* AssetToCheckout) {
    return false;
}


