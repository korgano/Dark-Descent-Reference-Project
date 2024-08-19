#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GenericPool.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UGenericPool : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnlimited;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Pool;
    
public:
    UGenericPool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UObject* SpawnObject(UClass* OutputType);
    
    UFUNCTION(BlueprintCallable)
    void PreSpawnPool(UClass* ObjectType, int32 Number);
    
    UFUNCTION(BlueprintCallable)
    void EnableSpawnedObject(UClass* OutputType, UObject* objectToEnable);
    
    UFUNCTION(BlueprintCallable)
    void DeleteObject(UObject* Object);
    
};

