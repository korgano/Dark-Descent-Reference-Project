#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShaderPermutationStruct.h"
#include "SwitchHierarchy.h"
#include "Templates/SubclassOf.h"
#include "ShaderPermutationSelector.generated.h"

class UDataTable;
class UMaterial;
class UMaterialInstance;
class UShaderPermutationSelector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UShaderPermutationSelector : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShaderPermutationStruct> AllShaderPermStruct;
    
    UShaderPermutationSelector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool GetStructFromMat(UMaterial* Master, FShaderPermutationStruct& OutStruct);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstance* GetMaterialWithParam(UMaterial* Master, TMap<FName, bool> Params);
    
    UFUNCTION(BlueprintCallable)
    static UShaderPermutationSelector* GetDefaultShaderPermutationSelector(TSubclassOf<UShaderPermutationSelector> BaseClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSwitchHierarchy> ConvertDataTableToSwitchHierarchy(UDataTable* _DataTable);
    
    UFUNCTION(BlueprintCallable)
    void AddNewShaderPermStruct(UMaterial* _BaseMaterial, TArray<TSoftObjectPtr<UMaterialInstance>> _MaterialsInstance, TArray<FName> _ParamsOrder);
    
};

