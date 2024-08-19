#include "ShaderPermutationSelector.h"
#include "Templates/SubclassOf.h"

UShaderPermutationSelector::UShaderPermutationSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UShaderPermutationSelector::GetStructFromMat(UMaterial* Master, FShaderPermutationStruct& OutStruct) {
    return false;
}

UMaterialInstance* UShaderPermutationSelector::GetMaterialWithParam(UMaterial* Master, TMap<FName, bool> Params) {
    return NULL;
}

UShaderPermutationSelector* UShaderPermutationSelector::GetDefaultShaderPermutationSelector(TSubclassOf<UShaderPermutationSelector> BaseClass) {
    return NULL;
}

TArray<FSwitchHierarchy> UShaderPermutationSelector::ConvertDataTableToSwitchHierarchy(UDataTable* _DataTable) {
    return TArray<FSwitchHierarchy>();
}

void UShaderPermutationSelector::AddNewShaderPermStruct(UMaterial* _BaseMaterial, TArray<TSoftObjectPtr<UMaterialInstance>> _MaterialsInstance, TArray<FName> _ParamsOrder) {
}


