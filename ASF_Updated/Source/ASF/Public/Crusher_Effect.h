#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EnumAiState.h"
#include "TMEvent_Effect.h"
#include "Crusher_Effect.generated.h"

class AAlien;

UCLASS(Blueprintable)
class ASF_API UCrusher_Effect : public UTMEvent_Effect {
    GENERATED_BODY()
public:
    UCrusher_Effect();

protected:
    UFUNCTION(BlueprintCallable)
    AAlien* SpawnCrusherDeffered(const TSoftClassPtr<AAlien>& CrusherClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, EnumAiState OnSpawnForcedState);
    
};

