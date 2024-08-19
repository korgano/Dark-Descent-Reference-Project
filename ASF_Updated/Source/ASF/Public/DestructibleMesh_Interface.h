#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "DestructibleMesh_Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDestructibleMesh_Interface : public UInterface {
    GENERATED_BODY()
};

class IDestructibleMesh_Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RepairMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyMesh(float _DamageAmout, FVector _HitLocation, float _Radius, float _ImpulseStrenght);
    
};

