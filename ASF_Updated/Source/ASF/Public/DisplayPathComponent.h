#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PathSegement.h"
#include "DisplayPathComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDisplayPathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDisplayPathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceDisplayPath(const TArray<FPathSegement>& Waypoints);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceClearPath();
    
};

