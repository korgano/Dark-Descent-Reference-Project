#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProjectileComponent.generated.h"

class UGenericPool;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UProjectileComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericPool* BulletPool;
    
    UProjectileComponent(const FObjectInitializer& ObjectInitializer);

};

