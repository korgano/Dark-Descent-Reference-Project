#pragma once
#include "CoreMinimal.h"
#include "DestructibleMesh_Interface.h"
#include "LDSTFloorActor.h"
#include "DM_Floor.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ADM_Floor : public ALDSTFloorActor, public IDestructibleMesh_Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeExlposion;
    
    ADM_Floor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

