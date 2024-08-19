#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AssemblyLDST.h"
#include "AssemblySTLDActor.generated.h"

class UAssemblyRootSceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASF_API AAssemblySTLDActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAssemblyRootSceneComponent* AssemblyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> RandomizedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssemblyLDST> AssemblyInfos;
    
    AAssemblySTLDActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RandomizeAssembly();
    
    UFUNCTION(BlueprintCallable)
    TArray<UStaticMeshComponent*> CreateStaticAssemblyComponentFromInfo(const FAssemblyLDST& Info);
    
    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* CreateMeshComponentFromInfo(const FAssemblyLDST& Info);
    
    UFUNCTION(BlueprintCallable)
    void ClearAssembly();
    
};

