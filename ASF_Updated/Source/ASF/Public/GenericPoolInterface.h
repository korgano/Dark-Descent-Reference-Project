#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GenericPoolInterface.generated.h"

class UObject;
class UWorld;

UINTERFACE(MinimalAPI)
class UGenericPoolInterface : public UInterface {
    GENERATED_BODY()
};

class IGenericPoolInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual UObject* GenerateObject(UWorld* World, UClass* OutputType) PURE_VIRTUAL(GenerateObject, return NULL;);
    
    UFUNCTION()
    virtual void EnableObject() PURE_VIRTUAL(EnableObject,);
    
    UFUNCTION()
    virtual void DisableObject() PURE_VIRTUAL(DisableObject,);
    
};

