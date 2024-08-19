#pragma once
#include "CoreMinimal.h"
#include "EnnemyTargetingComponent.h"
#include "AlienTargetingComponent.generated.h"

class AAIController_Alien;
class AAlien;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAlienTargetingComponent : public UEnnemyTargetingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAlien* Alien;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController_Alien* AlienControler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
public:
    UAlienTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

